/********************************************************/
/*                                                      */
/*  computer.c                                          */
/*                                                      */
/*  Contains the test functions used by computer.seq to */
/*  simulate testing a computer motherboard.            */
/*                                                      */
/********************************************************/
#include "tsutil.h"
#include <stdlib.h>
#include <stdio.h>
#include <utility.h>
#include <formatio.h>
#include <userint.h>
#include <string.h>
#include "computer.h"



void __declspec(dllexport) __stdcall VacuumOn(CAObjHandle seqContextCVI, char reportText[1024], short *errorOccurred, long *errorCode, char errorMsg[1024])
{
    int error = 0;
    ErrMsg errMsg = {'\0'};
    ERRORINFO errorInfo;

Error:  

    // If an error occurred, set the error flag to cause a run-time error in TestStand.
    if (error < 0)
    {
        *errorOccurred = TRUE;
        *errorCode = error;
        strcpy(errorMsg, errMsg);
    }
}

void __declspec(dllexport) __stdcall PowerupTest(long PowerFail, long *result, char reportText[1024], short *errorOccurred, 
    long *errorCode, char errorMsg[1024])
{
    int error = 0;
    ErrMsg errMsg = {'\0'};
    ERRORINFO errorInfo;
    
    *result = !PowerFail;

Error:  

    // If an error occurred, set the error flag to cause a run-time error in TestStand.
    if (error < 0)
    {
        *errorOccurred = TRUE;
        *errorCode = error;
        strcpy(errorMsg, errMsg);
    }
}

void __declspec(dllexport) __stdcall ROMTest(long ROMFail, long *result, char reportText[1024], short *errorOccurred, 
    long *errorCode, char errorMsg[1024])
{
    int error = 0;
    ErrMsg errMsg = {'\0'};
    ERRORINFO errorInfo;
    
    *result = !ROMFail;

Error:  

    // If an error occurred, set the error flag to cause a run-time error in TestStand.
    if (error < 0)
    {
        *errorOccurred = TRUE;
        *errorCode = error;
        strcpy(errorMsg, errMsg);
    }
}
 
void __declspec(dllexport) __stdcall RAMTest(long RAMFail, long *result, char reportText[1024], short *errorOccurred, 
    long *errorCode, char errorMsg[1024])
{
    int error = 0;
    ErrMsg errMsg = {'\0'};
    ERRORINFO errorInfo;
    
    *result = !RAMFail;

Error:  

    // If an error occurred, set the error flag to cause a run-time error in TestStand.
    if (error < 0)
    {
        *errorOccurred = TRUE;
        *errorCode = error;
        strcpy(errorMsg, errMsg);
    }
}

void __declspec(dllexport) __stdcall VideoTest(long VideoValue, double *measurement, char reportText[1024], short *errorOccurred, 
    long *errorCode, char errorMsg[1024])
{
    int error = 0;
    ErrMsg errMsg = {'\0'};
    ERRORINFO errorInfo;

Error:  

    // If an error occurred, set the error flag to cause a run-time error in TestStand.
    if (error < 0)
    {
        *errorOccurred = TRUE;
        *errorCode = error;
        strcpy(errorMsg, errMsg);
    }
}

void __declspec(dllexport) __stdcall KeyboardTest(long KeyboardValue, double *measurement, char reportText[1024], short *errorOccurred, 
    long *errorCode, char errorMsg[1024])
{
    int error = 0;
    ErrMsg errMsg = {'\0'};
    ERRORINFO errorInfo;
    
    *measurement = KeyboardValue;

Error:  

    // If an error occurred, set the error flag to cause a run-time error in TestStand.
    if (error < 0)
    {
        *errorOccurred = TRUE;
        *errorCode = error;
        strcpy(errorMsg, errMsg);
    }
}

void __declspec(dllexport) __stdcall VacuumOff(CAObjHandle seqContextCVI, char reportText[1024], short *errorOccurred, long *errorCode, char errorMsg[1024])
{
    int error = 0;
    ErrMsg errMsg = {'\0'};
    ERRORINFO errorInfo;

Error:  

    // If an error occurred, set the error flag to cause a run-time error in TestStand.
    if (error < 0)
    {
        *errorOccurred = TRUE;
        *errorCode = error;
        strcpy(errorMsg, errMsg);
    }
}

int CVICALLBACK SetupUICallback (int panel, int control, int event,
        void *callbackData, int eventData1, int eventData2)
{
    int error = 0;
    ErrMsg errMsg = {'\0'};
    ERRORINFO errorInfo;
    
    if(event == EVENT_COMMIT)
    {
        QuitUserInterface(0);
    }
    
Error:  

    if(error < 0)
    {
        return UIEOperationFailed;
    }   
    
    return 0;
}
