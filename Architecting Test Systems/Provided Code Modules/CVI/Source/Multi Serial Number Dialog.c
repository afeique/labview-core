//==============================================================================
//
// Title:		Multi Serial Number Dialog
//
//==============================================================================

//==============================================================================
// Include files


#include "tsutil.h"
#include "tsapicvi.h"
#include <ansi_c.h>
#include <cvirte.h>		
#include <userint.h>
#include "Multi Serial Number Dialog.h"
#include "toolbox.h"

//==============================================================================
// Constants

#define MAX_STRING_LENGTH 1024
#define MAX_NUM_SERIALS 20

//==============================================================================
// Types

//==============================================================================
// Static global variables

static int panelHandle = 0;

//==============================================================================
// Static functions

//==============================================================================
// Global variables

//==============================================================================
// Global functions

void DLLEXPORT MultiSerialNumberDialog (CAObjHandle seqContext, char serialNumbers[][1024], int *numSerials)
{
	int error = 0;
	/* initialize and load resources */
	errChk (panelHandle = LoadPanelEx (0, "Multi Serial Number Dialog.uir", PANEL, __CVIUserHInst));
	
	/* display the panel and run the user interface */
	errChk (DisplayPanel (panelHandle));

	errChk (InsertTableRows(panelHandle, PANEL_TABLE, 1, *numSerials, VAL_CELL_STRING));  
	
	//populate the table with the serial numbers in the input array
	for(int i = 0; i < *numSerials; ++i)
	{
		 SetTableCellVal(panelHandle, PANEL_TABLE, MakePoint(1, i + 1),  serialNumbers[i]);
	}
	
	//if the user clicked OK, RunUserInterface will return 1.  in this case, copy the current table values to the serials array and update the number of serials
	if(RunUserInterface ())
	{
		char *tableValues[MAX_NUM_SERIALS];
		int numRows;
		GetNumTableRows(panelHandle,PANEL_TABLE,&numRows);
		
		GetTableCellRangeVals(panelHandle,PANEL_TABLE,MakeRect(1,1,numRows,1), tableValues, VAL_ROW_MAJOR);
		
		for(int i =0; i < MAX_NUM_SERIALS; i++)
		{
			strcpy(serialNumbers[i],  "");
		}
		
		
		for(int i =0; i < numRows; i++)
		{
			strcpy(serialNumbers[i], tableValues[i]);
		}
		
		FreeTableValStrings(tableValues,numRows);
		(*numSerials) = numRows;
	}
																									 

	Error:
	/* clean up */
	if (panelHandle > 0)
		DiscardPanel (panelHandle);
}

//==============================================================================
// UI callback function prototypes

int CVICALLBACK panelCB (int panel, int event, void *callbackData,
		int eventData1, int eventData2)
{
	if (event == EVENT_CLOSE)
		QuitUserInterface (0);
	return 0;
}

int CVICALLBACK AddRowButton (int panel, int control, int event,
							  void *callbackData, int eventData1, int eventData2)
{
	int numRows;
	Point currentCell;
	switch (event)
	{
		case EVENT_COMMIT:
			GetNumTableRows(panelHandle, PANEL_TABLE, &numRows );
			if(numRows < MAX_NUM_SERIALS)
			{
			 GetActiveTableCell(panelHandle, PANEL_TABLE, &currentCell);
			 InsertTableRows(panelHandle,PANEL_TABLE, currentCell.y + 1 ,1 ,VAL_CELL_STRING);
			 SetActiveTableCell(panelHandle, PANEL_TABLE, MakePoint(currentCell.x, currentCell.y + 1));
			}
			break;
	}
	return 0;
}

int CVICALLBACK DeleteRowButton (int panel, int control, int event,
								 void *callbackData, int eventData1, int eventData2)
{
	Point currentCell;
	switch (event)
	{
		case EVENT_COMMIT:
			 GetActiveTableCell(panelHandle, PANEL_TABLE, &currentCell);
			 DeleteTableRows(panelHandle,PANEL_TABLE,currentCell.y ,1);

			break;
	}
	return 0;
}

int CVICALLBACK okButton (int panel, int control, int event,
						  void *callbackData, int eventData1, int eventData2)
{
	switch (event)
	{
		case EVENT_COMMIT:
			 	QuitUserInterface (1);  
			break;
	}
	return 0;
}
