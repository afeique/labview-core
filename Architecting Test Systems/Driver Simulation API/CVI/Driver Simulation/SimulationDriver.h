//==============================================================================
//
// Title:		DriverSimulation.h
// Purpose:		A short description of the interface.
//
// Created on:	6/30/2015 at 10:51:03 AM by NI.
// Copyright:	NI. All Rights Reserved.
//
//==============================================================================

#ifndef __DriverSimulation_H__
#define __DriverSimulation_H__

#ifdef __cplusplus
    extern "C" {
#endif

//==============================================================================
// Include files

#include "cvidef.h"

/// INCL
#include "InstrumentSimulation.h"        

//==============================================================================
// Constants

//==============================================================================
// Types
/// ADDT Error  
struct Error
{
	int Code;
	char* Msg;
	int Occurred
};
typedef struct Error Error;
//==============================================================================
// External variables

//==============================================================================
// Global functions

/// ENUM TestStand_Instrument_Simulation_DMM_TemperatureSensorType
#define KTypeThermocouple 0
#define JTypeThermocouple 1

/// ENUM TestStand_Instrument_Simulation_SignalTypes
#define DC 0 
#define AC 1 

// ADDT TestStand_Instrument_Simulation_DMM_TemperatureSensorType

/// -> Fixture
/// HIFN Set the current UUT in the specified test socket of the test fixture.  This function simulates physically loading a UUT into a test fixture.
/// HIPAR 1/Serial Number of the UUT to connect to the fixture.
/// HIPAR 2/Socket index of the fixture to which the UUT is connected.
void __stdcall Sim_Fixture_SetUUT(char* serialNumber, int socketIndex, Error* errorInfo);
/// HIFN Sets the number of available sockets on the test fixture.  The test fixture supports up to four test sockets.
/// NUM 1/1/4/1/1
/// HIPAR 1/The number of active sockets in the test fixture.
void __stdcall Sim_Fixture_SetNumberOfSockets(int numberOfSockets, Error* errorInfo);
/// HIFN Changes the ambient temperature, which effects all UUTs in the test fixture.
/// HIPAR 1/The temperature value, ranging from 20 - 100 degrees Celcius.
/// NUM 1/20/100/1/1     
void __stdcall Sim_Fixture_SetAmbientTemperature(double value, Error* errorInfo);
/// HIFN Changes the ambient light intensity, which effects all UUTs in the test fixture. 
/// HIPAR 1/The light intensity, ranging from 0 (no lighting) to 100 (maximum lighting)
/// NUM 1/0/100/1/1 
void __stdcall Sim_Fixture_SetAmbientLightIntensity(double value, Error* errorInfo);

/// HIFN Provides a list of Valid serial numbers that the fixture can load
/// HIPAR 1/The list of Valid serial numbers
/// HIPAR 2/The number of valid serial numbers
void __stdcall Sim_Fixture_GetAllAvailableSerialNumbers(char ***serialNumbers, int *numSerials, Error* errorInfo);    
/// <- Fixture

/// -> DMM
// DMM Initialize
/// HIFN Opens a reference to and reserve a DMM using the specified resource name.  You must call the initialize function for a specific resource name before calling any other DMM functions.  Call the close function to release the DMM. 
/// HIPAR 1/The name of the instrument to initialize.           
void __stdcall Sim_Dmm_Initialize(char* resourceName, Error* errorInfo);
/// HIFN Configure the type of signal measured by the DMM. In AC mode, the DMM returns the RMS voltage measurement.
/// HIPAR 1/The name of the DMM.
/// RNG 2      
/// HIPAR 2/The type of signal to measure.
void __stdcall Sim_Dmm_Configure(char* resourceName, TestStand_Instrument_Simulation_SignalTypes signalType, Error* errorInfo);
/// HIFN Measures the resistance between the specified channels.
/// HIPAR 1/The name of the DMM.
/// HIPAR 2/The first channel to measure.
/// HIPAR 3/The second channel to measure.
/// HIPAR 4/The test socket to connect the instrument to before taking the measurement.  
/// OUT 5
/// HIPAR 5/(Output) The resistance measurement in Ohms.   
void __stdcall Sim_Dmm_ReadResistance(char* resourceName, int channel1, int channel2, int testSocket, double* result, Error* errorInfo);
/// HIFN Measures the voltage at the specified channel. 
/// HIPAR 1/The name of the DMM.
/// HIPAR 2/The channel to measure.
/// HIPAR 3/The test socket to connect the instrument to before taking the measurement.  
/// OUT 4
/// HIPAR 4/(Output) The voltage measurement in Volts.   
void __stdcall Sim_Dmm_ReadVoltage(char* resourceName, int channel, int testSocket, double* result , Error* errorInfo);
/// HIFN Measures the DC voltage at the specified channel, then scales the value to a temperature measurement based on the provided sensor type.            
/// HIPAR 1/The name of the DMM.
/// HIPAR 2/The channel to measure.
/// HIPAR 3/The test socket to connect the instrument to before taking the measurement.  
/// RNG 4 
/// HIPAR 4/The type of themocouple used to take the meaurement.  This input determines the scaling factor used.  
/// OUT 5
/// HIPAR 5/(Output) The temperature measurement in degrees Celcius.   
void __stdcall Sim_Dmm_ReadTemperature(char* resourceName, int channel, int testSocket, TestStand_Instrument_Simulation_DMM_TemperatureSensorType sensorType, double* result, Error* errorInfo);
/// HIFN Closes a reference to the specified DMM.  You must initialize the DMM using the initialize function before calling the close function.
/// HIPAR 1/The name of the instrument to close.  
void __stdcall Sim_Dmm_Close(char* resourceName, Error* errorInfo);
/// <- DMM

/// -> PowerSupply
/// HIFN Opens a reference to and reserve a power supply using the specified resource name.  You must call the initialize function for a specific resource name before calling any other power supply functions.  Call the close function to release the power supply. 
/// HIPAR 1/The name of the instrument to initialize.
void __stdcall Sim_PowerSupply_Initialize(char* resourceName, Error* errorInfo);
/// HIFN Generates a continuous DC signal with the specified voltage.
/// HIPAR 1/The name of the Power Supply.
/// HIPAR 2/The channel on which to apply the signal.
/// HIPAR 3/The test socket to connect the instrument to before taking the measurement.  
/// HIPAR 4/The voltage to apply, in Volts.  
void __stdcall Sim_PowerSupply_GenerateOutputVoltageDC(char* resourceName, int channel, int testSocket, double outputVoltage, Error* errorInfo);
/// HIFN Generates a continuous AC signal with the specified voltage. 
/// HIPAR 1/The name of the Power Supply.
/// HIPAR 2/The channel on which to apply the signal.
/// HIPAR 3/The test socket to connect the instrument to before taking the measurement.  
/// HIPAR 4/The mean voltage to apply, in Volts.  
/// HIPAR 5/The frequency of the signal to generate, in Hz  
/// HIPAR 6/The amplitude of the AC signal, in Volts.  
void __stdcall Sim_PowerSupply_GenerateOutputVoltageAC(char* resourceName, int channel, int testSocket, double outputVoltage, double frequency, double amplitude, Error* errorInfo);
/// HIFN Closes a reference to a power supply.  You must Initialize the power supply using the initialize function before calling the close function. 
/// HIPAR 1/The name of the instrument to close. 
void __stdcall Sim_PowerSupply_Close(char* resourceName, Error* errorInfo);
/// <- PowerSupply

/// -> Scope
/// HIFN Opens a reference to and reserve an oscilloscope using the specified resource name.  You must call the initialize function for a specific resource name before calling any other oscilloscope functions.  Call the close function to release the oscilloscope. 
/// HIPAR 1/The name of the instrument to initialize.
void __stdcall Sim_Scope_Initialize(char* resourceName, Error* errorInfo);
/// HIFN Configures the read mode of the oscilloscope. 
/// HIPAR 1/The name of the oscilloscope.
/// HIPAR 2/The number of samples to read.
/// HIPAR 3/The number of samples to measure per second (sample rate in Hertz).  
void __stdcall Sim_Scope_Configure(char* resourceName, int numberOfSamples, int samplesPerSecond, Error* errorInfo);
/// HIFN Measures a waveform and returns an array of numbers containing the data.  Call the configure function to change the sample rate and number of samples. 
/// HIPAR 1/The name of the oscilloscope.
/// HIPAR 2/The channel on which to apply the signal.
/// HIPAR 3/The test socket to connect the instrument to before taking the measurement.  
/// HIPAR 4/The resulting array of data.  Ensure that the buffer you provide is large enough to contain the amount of samples configured using the configure function.  The default is 1000 Samples.  
void __stdcall Sim_Scope_ReadWaveform(char* resourceName, int channel, int testSocket, double* result, Error* errorInfo);
/// HIFN Closes a reference to the specified oscilloscope.  You must initialize the oscilloscope using the initialize function before calling the close function.
/// HIPAR 1/The name of the instrument to close. 
void __stdcall Sim_Scope_Close(char* resourceName, Error* errorInfo);
/// <- Scope

#ifdef __cplusplus
    }
#endif

#endif  /* ndef __DriverSimulation_H__ */
