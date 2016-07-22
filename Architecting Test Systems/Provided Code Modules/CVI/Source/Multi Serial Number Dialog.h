/**************************************************************************/
/* LabWindows/CVI User Interface Resource (UIR) Include File              */
/*                                                                        */
/* WARNING: Do not add to, delete from, or otherwise modify the contents  */
/*          of this include file.                                         */
/**************************************************************************/

#include <userint.h>

#ifdef __cplusplus
    extern "C" {
#endif

     /* Panels and Controls: */

#define  PANEL                            1       /* callback function: panelCB */
#define  PANEL_TABLE                      2       /* control type: table, callback function: (none) */
#define  PANEL_DELETEROWBUTTON            3       /* control type: command, callback function: DeleteRowButton */
#define  PANEL_ADDROWBUTTON               4       /* control type: command, callback function: AddRowButton */
#define  PANEL_OKBUTTON                   5       /* control type: command, callback function: okButton */


     /* Control Arrays: */

          /* (no control arrays in the resource file) */


     /* Menu Bars, Menus, and Menu Items: */

          /* (no menu bars in the resource file) */


     /* Callback Prototypes: */

int  CVICALLBACK AddRowButton(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK DeleteRowButton(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK okButton(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK panelCB(int panel, int event, void *callbackData, int eventData1, int eventData2);


#ifdef __cplusplus
    }
#endif
