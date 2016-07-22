// CVI wrapper header file for .NET assembly: TestStand Instrument Simulation, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
//
// This is specified by the '__assemblyName' constant in the generated source file.
// If there are multiple versions of this assembly, and you want .NET to determine 
// the appropriate one to load, then you can remove the version, culture, and public 
// key token information from the constant and just specify the name of the assembly.
//
// Other assemblies referenced by the target assembly:
// Name: mscorlib, Location: C:\Windows\Microsoft.NET\Framework\v4.0.30319\mscorlib.dll
//
// If any assembly, including the target assembly, is not installed in the
// Global Assembly Cache (GAC) or in the application directory, and the wrapper
// code needs to load the assembly to convert types like arrays and enums, then
// you must register the path of the assembly with the CVI .NET library by
// calling CDotNetRegisterAssemblyPath before calling the wrapper code.
//
// Types exposed by the target assembly but defined in other assemblies:
// CVI name: System_Collections_IDictionary, .NET name: System.Collections.IDictionary, Assembly: mscorlib, Module: Global Assembly Cache
// CVI name: System_Type, .NET name: System.Type, Assembly: mscorlib, Module: Global Assembly Cache
// CVI name: System_Runtime_Serialization_SerializationInfo, .NET name: System.Runtime.Serialization.SerializationInfo, Assembly: mscorlib, Module: Global Assembly Cache
// CVI name: System_Reflection_MethodBase, .NET name: System.Reflection.MethodBase, Assembly: mscorlib, Module: Global Assembly Cache
// CVI name: System_Collections_Generic_Dictionary_T2, .NET name: System.Collections.Generic.Dictionary`2[[System.Int32, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089],[TestStand_Instrument_Simulation.UUT, TestStand Instrument Simulation, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null]], Assembly: mscorlib, Module: Global Assembly Cache
// CVI name: System_Exception, .NET name: System.Exception, Assembly: mscorlib, Module: Global Assembly Cache
// CVI name: System_Collections_Generic_Dictionary_T2, .NET name: System.Collections.Generic.Dictionary`2[[System.String, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089],[TestStand_Instrument_Simulation.SimulatedInstrument, TestStand Instrument Simulation, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null]], Assembly: mscorlib, Module: Global Assembly Cache
// CVI name: System_Runtime_Serialization_StreamingContext, .NET name: System.Runtime.Serialization.StreamingContext, Assembly: mscorlib, Module: Global Assembly Cache
// CVI name: System_Collections_Generic_Dictionary_T2, .NET name: System.Collections.Generic.Dictionary`2[[System.String, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089],[TestStand_Instrument_Simulation.UUT, TestStand Instrument Simulation, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null]], Assembly: mscorlib, Module: Global Assembly Cache
// CVI name: System_Collections_Generic_Dictionary_T2, .NET name: System.Collections.Generic.Dictionary`2[[TestStand_Instrument_Simulation.AmbientSettings, TestStand Instrument Simulation, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null],[System.Double, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089]], Assembly: mscorlib, Module: Global Assembly Cache

#include <cvidotnet.h>

#ifdef __cplusplus
extern "C" {
#endif

// Type definitions
typedef struct __TestStand_Instrument_Simulation_Signal * TestStand_Instrument_Simulation_Signal;
typedef struct __TestStand_Instrument_Simulation_DCSignal * TestStand_Instrument_Simulation_DCSignal;
typedef struct __TestStand_Instrument_Simulation_ACSignal * TestStand_Instrument_Simulation_ACSignal;
typedef struct __TestStand_Instrument_Simulation_TestFixture * TestStand_Instrument_Simulation_TestFixture;
typedef struct __TestStand_Instrument_Simulation_TestFixture_TestFixtureData * TestStand_Instrument_Simulation_TestFixture_TestFixtureData;
typedef struct __System_Collections_Generic_Dictionary_T2 * System_Collections_Generic_Dictionary_T2;
typedef struct __System_Collections_Generic_Dictionary_T2 * System_Collections_Generic_Dictionary_T2;
typedef struct __System_Collections_Generic_Dictionary_T2 * System_Collections_Generic_Dictionary_T2;
typedef struct __TestStand_Instrument_Simulation_simulationExceptionParser * TestStand_Instrument_Simulation_simulationExceptionParser;
typedef struct __TestStand_Instrument_Simulation_SimulationException * TestStand_Instrument_Simulation_SimulationException;
typedef struct __System_Collections_IDictionary * System_Collections_IDictionary;
typedef struct __System_Exception * System_Exception;
typedef struct __System_Reflection_MethodBase * System_Reflection_MethodBase;
typedef struct __System_Runtime_Serialization_SerializationInfo * System_Runtime_Serialization_SerializationInfo;
typedef struct __System_Runtime_Serialization_StreamingContext * System_Runtime_Serialization_StreamingContext;
typedef struct __System_Type * System_Type;
typedef struct __TestStand_Instrument_Simulation_SimulationException_ErrorInfo * TestStand_Instrument_Simulation_SimulationException_ErrorInfo;
typedef struct __TestStand_Instrument_Simulation_UUTWriter * TestStand_Instrument_Simulation_UUTWriter;
typedef struct __TestStand_Instrument_Simulation_UUT * TestStand_Instrument_Simulation_UUT;
typedef struct __TestStand_Instrument_Simulation_SolarPanelUUT * TestStand_Instrument_Simulation_SolarPanelUUT;
typedef struct __TestStand_Instrument_Simulation_UUTPin * TestStand_Instrument_Simulation_UUTPin;
typedef struct __TestStand_Instrument_Simulation_UUTOutputPin * TestStand_Instrument_Simulation_UUTOutputPin;
typedef struct __TestStand_Instrument_Simulation_UUTInputPin * TestStand_Instrument_Simulation_UUTInputPin;
typedef struct __TestStand_Instrument_Simulation_UUTEnvironmentPin * TestStand_Instrument_Simulation_UUTEnvironmentPin;
typedef struct __TestStand_Instrument_Simulation_InstrumentManager * TestStand_Instrument_Simulation_InstrumentManager;
typedef struct __System_Collections_Generic_Dictionary_T2 * System_Collections_Generic_Dictionary_T2;
typedef struct __TestStand_Instrument_Simulation_SimulatedInstrument * TestStand_Instrument_Simulation_SimulatedInstrument;
typedef struct __TestStand_Instrument_Simulation_DMM * TestStand_Instrument_Simulation_DMM;
typedef struct __TestStand_Instrument_Simulation_PowerSupply * TestStand_Instrument_Simulation_PowerSupply;
typedef struct __TestStand_Instrument_Simulation_Oscilloscope * TestStand_Instrument_Simulation_Oscilloscope;

// C wrapper for enumeration type TestStand_Instrument_Simulation.SignalTypes
#ifndef TestStand_Instrument_Simulation_SignalTypes_DEFINED
#define TestStand_Instrument_Simulation_SignalTypes_DEFINED
typedef enum TestStand_Instrument_Simulation_SignalTypes
{
	TestStand_Instrument_Simulation_SignalTypes_DC = 0x0,
	TestStand_Instrument_Simulation_SignalTypes_AC = 0x1,
} TestStand_Instrument_Simulation_SignalTypes;
#endif // TestStand_Instrument_Simulation_SignalTypes_DEFINED

// C wrapper for enumeration type TestStand_Instrument_Simulation.AmbientSettings
#ifndef TestStand_Instrument_Simulation_AmbientSettings_DEFINED
#define TestStand_Instrument_Simulation_AmbientSettings_DEFINED
typedef enum TestStand_Instrument_Simulation_AmbientSettings
{
	TestStand_Instrument_Simulation_AmbientSettings_temperature = 0x0,
	TestStand_Instrument_Simulation_AmbientSettings_light = 0x1,
} TestStand_Instrument_Simulation_AmbientSettings;
#endif // TestStand_Instrument_Simulation_AmbientSettings_DEFINED

// C wrapper for enumeration type TestStand_Instrument_Simulation.ErrorCodes
#ifndef TestStand_Instrument_Simulation_ErrorCodes_DEFINED
#define TestStand_Instrument_Simulation_ErrorCodes_DEFINED
typedef enum TestStand_Instrument_Simulation_ErrorCodes
{
	TestStand_Instrument_Simulation_ErrorCodes_noError = 0x0,
	TestStand_Instrument_Simulation_ErrorCodes_instrumentWrongType = 0xfffffff7,
	TestStand_Instrument_Simulation_ErrorCodes_invalidSocketCount = 0xfffffff8,
	TestStand_Instrument_Simulation_ErrorCodes_invalidSocketIndex = 0xfffffff9,
	TestStand_Instrument_Simulation_ErrorCodes_instrumentReserved = 0xfffffffa,
	TestStand_Instrument_Simulation_ErrorCodes_instrumentNotFound = 0xfffffffb,
	TestStand_Instrument_Simulation_ErrorCodes_invalidPin = 0xfffffffc,
	TestStand_Instrument_Simulation_ErrorCodes_couldNotLoadUUTs = 0xfffffffd,
	TestStand_Instrument_Simulation_ErrorCodes_invalidSerialNumber = 0xfffffffe,
	TestStand_Instrument_Simulation_ErrorCodes_instrumentNotConfigured = 0xffffffff,
} TestStand_Instrument_Simulation_ErrorCodes;
#endif // TestStand_Instrument_Simulation_ErrorCodes_DEFINED

// C wrapper for enumeration type TestStand_Instrument_Simulation.UUTPin+readMode
#ifndef TestStand_Instrument_Simulation_UUTPin_readMode_DEFINED
#define TestStand_Instrument_Simulation_UUTPin_readMode_DEFINED
typedef enum TestStand_Instrument_Simulation_UUTPin_readMode
{
	TestStand_Instrument_Simulation_UUTPin_readMode_singlePoint = 0x0,
	TestStand_Instrument_Simulation_UUTPin_readMode_waveForm = 0x1,
} TestStand_Instrument_Simulation_UUTPin_readMode;
#endif // TestStand_Instrument_Simulation_UUTPin_readMode_DEFINED

// C wrapper for enumeration type TestStand_Instrument_Simulation.SolarPanelUUT+failureModes
#ifndef TestStand_Instrument_Simulation_SolarPanelUUT_failureModes_DEFINED
#define TestStand_Instrument_Simulation_SolarPanelUUT_failureModes_DEFINED
typedef enum TestStand_Instrument_Simulation_SolarPanelUUT_failureModes
{
	TestStand_Instrument_Simulation_SolarPanelUUT_failureModes_SolarResist = 0x0,
	TestStand_Instrument_Simulation_SolarPanelUUT_failureModes_Temperature = 0x1,
	TestStand_Instrument_Simulation_SolarPanelUUT_failureModes_DCOut = 0x2,
	TestStand_Instrument_Simulation_SolarPanelUUT_failureModes_ACOut = 0x3,
	TestStand_Instrument_Simulation_SolarPanelUUT_failureModes_SolarOutput = 0x4,
	TestStand_Instrument_Simulation_SolarPanelUUT_failureModes_Regulator = 0x5,
} TestStand_Instrument_Simulation_SolarPanelUUT_failureModes;
#endif // TestStand_Instrument_Simulation_SolarPanelUUT_failureModes_DEFINED

// C wrapper for enumeration type TestStand_Instrument_Simulation.DMM+TemperatureSensorType
#ifndef TestStand_Instrument_Simulation_DMM_TemperatureSensorType_DEFINED
#define TestStand_Instrument_Simulation_DMM_TemperatureSensorType_DEFINED
typedef enum TestStand_Instrument_Simulation_DMM_TemperatureSensorType
{
	TestStand_Instrument_Simulation_DMM_TemperatureSensorType_KTypeThermocouple = 0x0,
	TestStand_Instrument_Simulation_DMM_TemperatureSensorType_JTypeThermocouple = 0x1,
} TestStand_Instrument_Simulation_DMM_TemperatureSensorType;
#endif // TestStand_Instrument_Simulation_DMM_TemperatureSensorType_DEFINED

// C wrapper for enumeration type TestStand_Instrument_Simulation.Oscilloscope+DMMMeasurementTypes
#ifndef TestStand_Instrument_Simulation_Oscilloscope_DMMMeasurementTypes_DEFINED
#define TestStand_Instrument_Simulation_Oscilloscope_DMMMeasurementTypes_DEFINED
typedef enum TestStand_Instrument_Simulation_Oscilloscope_DMMMeasurementTypes
{
	TestStand_Instrument_Simulation_Oscilloscope_DMMMeasurementTypes_Voltage = 0x0,
	TestStand_Instrument_Simulation_Oscilloscope_DMMMeasurementTypes_Current = 0x1,
	TestStand_Instrument_Simulation_Oscilloscope_DMMMeasurementTypes_Resistance = 0x2,
} TestStand_Instrument_Simulation_Oscilloscope_DMMMeasurementTypes;
#endif // TestStand_Instrument_Simulation_Oscilloscope_DMMMeasurementTypes_DEFINED




// Global Functions
int CVIFUNC Initialize_TestStand_Instrument_Simulation(void);
int CVIFUNC Close_TestStand_Instrument_Simulation(void);

// Type: TestStand_Instrument_Simulation.Signal
int CVIFUNC TestStand_Instrument_Simulation_Signal__Create(
	TestStand_Instrument_Simulation_Signal * __instance,
	double voltage,
	CDotNetHandle * __exception);
int CVIFUNC TestStand_Instrument_Simulation_Signal_getSinglePoint(
	TestStand_Instrument_Simulation_Signal __instance,
	double t,
	double * value,
	CDotNetHandle * __exception);
int CVIFUNC TestStand_Instrument_Simulation_Signal_getPoints(
	TestStand_Instrument_Simulation_Signal __instance,
	int numSamples,
	int samplesPerSecond,
	double ** result,
	ssize_t * __resultLength,
	CDotNetHandle * __exception);
int CVIFUNC TestStand_Instrument_Simulation_Signal__Get__Voltage(
	TestStand_Instrument_Simulation_Signal __instance,
	double * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC TestStand_Instrument_Simulation_Signal__Set__Voltage(
	TestStand_Instrument_Simulation_Signal __instance,
	double Voltage,
	CDotNetHandle * __exception);

// Type: TestStand_Instrument_Simulation.DCSignal
int CVIFUNC TestStand_Instrument_Simulation_DCSignal__Create(
	TestStand_Instrument_Simulation_DCSignal * __instance,
	double voltage,
	CDotNetHandle * __exception);
int CVIFUNC TestStand_Instrument_Simulation_DCSignal_getSinglePoint(
	TestStand_Instrument_Simulation_DCSignal __instance,
	double t,
	double * value,
	CDotNetHandle * __exception);
int CVIFUNC TestStand_Instrument_Simulation_DCSignal_getPoints(
	TestStand_Instrument_Simulation_DCSignal __instance,
	int numSamples,
	int samplesPerSecond,
	double ** result,
	ssize_t * __resultLength,
	CDotNetHandle * __exception);
int CVIFUNC TestStand_Instrument_Simulation_DCSignal__Get__Voltage(
	TestStand_Instrument_Simulation_DCSignal __instance,
	double * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC TestStand_Instrument_Simulation_DCSignal__Set__Voltage(
	TestStand_Instrument_Simulation_DCSignal __instance,
	double Voltage,
	CDotNetHandle * __exception);

// Type: TestStand_Instrument_Simulation.ACSignal
int CVIFUNC TestStand_Instrument_Simulation_ACSignal__Create(
	TestStand_Instrument_Simulation_ACSignal * __instance,
	double voltage,
	double frequency,
	double amplitude,
	CDotNetHandle * __exception);
int CVIFUNC TestStand_Instrument_Simulation_ACSignal_getSinglePoint(
	TestStand_Instrument_Simulation_ACSignal __instance,
	double t,
	double * value,
	CDotNetHandle * __exception);
int CVIFUNC TestStand_Instrument_Simulation_ACSignal_getPoints(
	TestStand_Instrument_Simulation_ACSignal __instance,
	int numSamples,
	int samplesPerSecond,
	double ** result,
	ssize_t * __resultLength,
	CDotNetHandle * __exception);
int CVIFUNC TestStand_Instrument_Simulation_ACSignal__Get__Frequency(
	TestStand_Instrument_Simulation_ACSignal __instance,
	double * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC TestStand_Instrument_Simulation_ACSignal__Set__Frequency(
	TestStand_Instrument_Simulation_ACSignal __instance,
	double Frequency,
	CDotNetHandle * __exception);
int CVIFUNC TestStand_Instrument_Simulation_ACSignal__Get__Amplitude(
	TestStand_Instrument_Simulation_ACSignal __instance,
	double * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC TestStand_Instrument_Simulation_ACSignal__Set__Amplitude(
	TestStand_Instrument_Simulation_ACSignal __instance,
	double Amplitude,
	CDotNetHandle * __exception);
int CVIFUNC TestStand_Instrument_Simulation_ACSignal__Get__Voltage(
	TestStand_Instrument_Simulation_ACSignal __instance,
	double * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC TestStand_Instrument_Simulation_ACSignal__Set__Voltage(
	TestStand_Instrument_Simulation_ACSignal __instance,
	double Voltage,
	CDotNetHandle * __exception);

// Type: TestStand_Instrument_Simulation.TestFixture
int CVIFUNC TestStand_Instrument_Simulation_TestFixture__Create(
	TestStand_Instrument_Simulation_TestFixture * __instance,
	CDotNetHandle * __exception);
int CVIFUNC TestStand_Instrument_Simulation_TestFixture_initialize(
	CDotNetHandle * __exception);
int CVIFUNC TestStand_Instrument_Simulation_TestFixture_writeUUTs(
	char * UUTDirectory,
	CDotNetHandle * __exception);
int CVIFUNC TestStand_Instrument_Simulation_TestFixture_loadUUTs(
	char * UUTDirectory,
	CDotNetHandle * __exception);
int CVIFUNC TestStand_Instrument_Simulation_TestFixture_getAllAvailableSerialNumbers(
	char *** serialNumbers,
	ssize_t * __serialNumbersLength,
	CDotNetHandle * __exception);
int CVIFUNC TestStand_Instrument_Simulation_TestFixture_setNumberOfSockets(
	unsigned int numberOfSockets,
	CDotNetHandle * __exception);
int CVIFUNC TestStand_Instrument_Simulation_TestFixture_loadUUT(
	char * serialNumber,
	int socketIndex,
	CDotNetHandle * __exception);
int CVIFUNC TestStand_Instrument_Simulation_TestFixture_takeMeasurement(
	int pin,
	int socket,
	double * result,
	TestStand_Instrument_Simulation_SignalTypes signalType,
	CDotNetHandle * __exception);
int CVIFUNC TestStand_Instrument_Simulation_TestFixture_getResistance(
	int pin1,
	int pin2,
	int socket,
	double * resistance,
	CDotNetHandle * __exception);
int CVIFUNC TestStand_Instrument_Simulation_TestFixture_takeWaveformMeasurement(
	int pin,
	int socket,
	double ** result,
	ssize_t * __resultLength,
	TestStand_Instrument_Simulation_SignalTypes signalType,
	int numSamples,
	int samplesPerSecond,
	CDotNetHandle * __exception);
int CVIFUNC TestStand_Instrument_Simulation_TestFixture_applyExcitation(
	int pin,
	int socket,
	TestStand_Instrument_Simulation_Signal input,
	CDotNetHandle * __exception);
int CVIFUNC TestStand_Instrument_Simulation_TestFixture_setEnvironment(
	TestStand_Instrument_Simulation_AmbientSettings setting,
	double value,
	CDotNetHandle * __exception);
int CVIFUNC TestStand_Instrument_Simulation_TestFixture_getEnvironmentValue(
	TestStand_Instrument_Simulation_AmbientSettings setting,
	double * value,
	CDotNetHandle * __exception);

// Type: TestStand_Instrument_Simulation.TestFixture+TestFixtureData
int CVIFUNC TestStand_Instrument_Simulation_TestFixture_TestFixtureData__Create(
	TestStand_Instrument_Simulation_TestFixture_TestFixtureData * __instance,
	CDotNetHandle * __exception);
int CVIFUNC TestStand_Instrument_Simulation_TestFixture_TestFixtureData__Get___UUTs(
	TestStand_Instrument_Simulation_TestFixture_TestFixtureData __instance,
	System_Collections_Generic_Dictionary_T2 * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC TestStand_Instrument_Simulation_TestFixture_TestFixtureData__Set___UUTs(
	TestStand_Instrument_Simulation_TestFixture_TestFixtureData __instance,
	System_Collections_Generic_Dictionary_T2 _UUTs,
	CDotNetHandle * __exception);
int CVIFUNC TestStand_Instrument_Simulation_TestFixture_TestFixtureData__Get__activeUUTs(
	TestStand_Instrument_Simulation_TestFixture_TestFixtureData __instance,
	System_Collections_Generic_Dictionary_T2 * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC TestStand_Instrument_Simulation_TestFixture_TestFixtureData__Set__activeUUTs(
	TestStand_Instrument_Simulation_TestFixture_TestFixtureData __instance,
	System_Collections_Generic_Dictionary_T2 activeUUTs,
	CDotNetHandle * __exception);
int CVIFUNC TestStand_Instrument_Simulation_TestFixture_TestFixtureData__Get__environmentVariables(
	TestStand_Instrument_Simulation_TestFixture_TestFixtureData __instance,
	System_Collections_Generic_Dictionary_T2 * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC TestStand_Instrument_Simulation_TestFixture_TestFixtureData__Set__environmentVariables(
	TestStand_Instrument_Simulation_TestFixture_TestFixtureData __instance,
	System_Collections_Generic_Dictionary_T2 environmentVariables,
	CDotNetHandle * __exception);

// Type: TestStand_Instrument_Simulation.simulationExceptionParser
int CVIFUNC TestStand_Instrument_Simulation_simulationExceptionParser_GenerateError(
	char * errorXML,
	int * code,
	char ** message,
	CDotNetHandle * __exception);

// Type: TestStand_Instrument_Simulation.SimulationException
int CVIFUNC TestStand_Instrument_Simulation_SimulationException__Create(
	TestStand_Instrument_Simulation_SimulationException * __instance,
	TestStand_Instrument_Simulation_ErrorCodes code,
	char * otherInfo,
	CDotNetHandle * __exception);
int CVIFUNC TestStand_Instrument_Simulation_SimulationException_Get_Message(
	TestStand_Instrument_Simulation_SimulationException __instance,
	char ** __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC TestStand_Instrument_Simulation_SimulationException_Get_Data(
	TestStand_Instrument_Simulation_SimulationException __instance,
	System_Collections_IDictionary * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC TestStand_Instrument_Simulation_SimulationException_Get_InnerException(
	TestStand_Instrument_Simulation_SimulationException __instance,
	System_Exception * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC TestStand_Instrument_Simulation_SimulationException_Get_TargetSite(
	TestStand_Instrument_Simulation_SimulationException __instance,
	System_Reflection_MethodBase * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC TestStand_Instrument_Simulation_SimulationException_Get_StackTrace(
	TestStand_Instrument_Simulation_SimulationException __instance,
	char ** __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC TestStand_Instrument_Simulation_SimulationException_Get_HelpLink(
	TestStand_Instrument_Simulation_SimulationException __instance,
	char ** __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC TestStand_Instrument_Simulation_SimulationException_Set_HelpLink(
	TestStand_Instrument_Simulation_SimulationException __instance,
	char * value,
	CDotNetHandle * __exception);
int CVIFUNC TestStand_Instrument_Simulation_SimulationException_Get_Source(
	TestStand_Instrument_Simulation_SimulationException __instance,
	char ** __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC TestStand_Instrument_Simulation_SimulationException_Set_Source(
	TestStand_Instrument_Simulation_SimulationException __instance,
	char * value,
	CDotNetHandle * __exception);
int CVIFUNC TestStand_Instrument_Simulation_SimulationException_Get_HResult(
	TestStand_Instrument_Simulation_SimulationException __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC TestStand_Instrument_Simulation_SimulationException_GetError(
	TestStand_Instrument_Simulation_ErrorCodes enumValue,
	char * otherInfo,
	char ** __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC TestStand_Instrument_Simulation_SimulationException_GetBaseException(
	TestStand_Instrument_Simulation_SimulationException __instance,
	System_Exception * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC TestStand_Instrument_Simulation_SimulationException_ToString(
	TestStand_Instrument_Simulation_SimulationException __instance,
	char ** __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC TestStand_Instrument_Simulation_SimulationException_GetObjectData(
	TestStand_Instrument_Simulation_SimulationException __instance,
	System_Runtime_Serialization_SerializationInfo info,
	System_Runtime_Serialization_StreamingContext context,
	CDotNetHandle * __exception);
int CVIFUNC TestStand_Instrument_Simulation_SimulationException_GetType(
	TestStand_Instrument_Simulation_SimulationException __instance,
	System_Type * __returnValue,
	CDotNetHandle * __exception);

// Type: TestStand_Instrument_Simulation.SimulationException+ErrorInfo
int CVIFUNC TestStand_Instrument_Simulation_SimulationException_ErrorInfo__Create(
	TestStand_Instrument_Simulation_SimulationException_ErrorInfo * __instance,
	CDotNetHandle * __exception);
int CVIFUNC TestStand_Instrument_Simulation_SimulationException_ErrorInfo__Get__code(
	TestStand_Instrument_Simulation_SimulationException_ErrorInfo __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC TestStand_Instrument_Simulation_SimulationException_ErrorInfo__Set__code(
	TestStand_Instrument_Simulation_SimulationException_ErrorInfo __instance,
	int code,
	CDotNetHandle * __exception);
int CVIFUNC TestStand_Instrument_Simulation_SimulationException_ErrorInfo__Get__message(
	TestStand_Instrument_Simulation_SimulationException_ErrorInfo __instance,
	char ** __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC TestStand_Instrument_Simulation_SimulationException_ErrorInfo__Set__message(
	TestStand_Instrument_Simulation_SimulationException_ErrorInfo __instance,
	char * message,
	CDotNetHandle * __exception);
int CVIFUNC TestStand_Instrument_Simulation_SimulationException_ErrorInfo__Get__otherInfo(
	TestStand_Instrument_Simulation_SimulationException_ErrorInfo __instance,
	char ** __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC TestStand_Instrument_Simulation_SimulationException_ErrorInfo__Set__otherInfo(
	TestStand_Instrument_Simulation_SimulationException_ErrorInfo __instance,
	char * otherInfo,
	CDotNetHandle * __exception);

// Type: TestStand_Instrument_Simulation.UUTWriter
int CVIFUNC TestStand_Instrument_Simulation_UUTWriter__Create(
	TestStand_Instrument_Simulation_UUTWriter * __instance,
	char * baseUUTsFilePath,
	CDotNetHandle * __exception);
int CVIFUNC TestStand_Instrument_Simulation_UUTWriter_generateAllUUTs(
	TestStand_Instrument_Simulation_UUTWriter __instance,
	CDotNetHandle * __exception);

// Type: TestStand_Instrument_Simulation.UUT
int CVIFUNC TestStand_Instrument_Simulation_UUT__Create(
	TestStand_Instrument_Simulation_UUT * __instance,
	char * name,
	CDotNetHandle * __exception);
int CVIFUNC TestStand_Instrument_Simulation_UUT_addPin(
	TestStand_Instrument_Simulation_UUT __instance,
	int pin,
	TestStand_Instrument_Simulation_UUTPin data,
	CDotNetHandle * __exception);
int CVIFUNC TestStand_Instrument_Simulation_UUT_applyVoltage(
	TestStand_Instrument_Simulation_UUT __instance,
	TestStand_Instrument_Simulation_Signal signal,
	int pin,
	CDotNetHandle * __exception);
int CVIFUNC TestStand_Instrument_Simulation_UUT_readVoltage(
	TestStand_Instrument_Simulation_UUT __instance,
	int pin,
	TestStand_Instrument_Simulation_SignalTypes signalType,
	TestStand_Instrument_Simulation_UUTPin_readMode mode,
	int numSamples,
	int samplesPerSecond,
	double ** result,
	ssize_t * __resultLength,
	CDotNetHandle * __exception);
int CVIFUNC TestStand_Instrument_Simulation_UUT_readResistance(
	TestStand_Instrument_Simulation_UUT __instance,
	int pin1,
	int pin2,
	double * resistance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC TestStand_Instrument_Simulation_UUT__Get__Name(
	TestStand_Instrument_Simulation_UUT __instance,
	char ** __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC TestStand_Instrument_Simulation_UUT__Set__Name(
	TestStand_Instrument_Simulation_UUT __instance,
	char * Name,
	CDotNetHandle * __exception);

// Type: TestStand_Instrument_Simulation.SolarPanelUUT
int CVIFUNC TestStand_Instrument_Simulation_SolarPanelUUT__Create(
	TestStand_Instrument_Simulation_SolarPanelUUT * __instance,
	char * name,
	TestStand_Instrument_Simulation_SolarPanelUUT_failureModes * testsToFail,
	ssize_t __testsToFailLength,
	CDotNetHandle * __exception);
int CVIFUNC TestStand_Instrument_Simulation_SolarPanelUUT_addPin(
	TestStand_Instrument_Simulation_SolarPanelUUT __instance,
	int pin,
	TestStand_Instrument_Simulation_UUTPin data,
	CDotNetHandle * __exception);
int CVIFUNC TestStand_Instrument_Simulation_SolarPanelUUT_applyVoltage(
	TestStand_Instrument_Simulation_SolarPanelUUT __instance,
	TestStand_Instrument_Simulation_Signal signal,
	int pin,
	CDotNetHandle * __exception);
int CVIFUNC TestStand_Instrument_Simulation_SolarPanelUUT_readVoltage(
	TestStand_Instrument_Simulation_SolarPanelUUT __instance,
	int pin,
	TestStand_Instrument_Simulation_SignalTypes signalType,
	TestStand_Instrument_Simulation_UUTPin_readMode mode,
	int numSamples,
	int samplesPerSecond,
	double ** result,
	ssize_t * __resultLength,
	CDotNetHandle * __exception);
int CVIFUNC TestStand_Instrument_Simulation_SolarPanelUUT_readResistance(
	TestStand_Instrument_Simulation_SolarPanelUUT __instance,
	int pin1,
	int pin2,
	double * resistance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC TestStand_Instrument_Simulation_SolarPanelUUT__Get__Name(
	TestStand_Instrument_Simulation_SolarPanelUUT __instance,
	char ** __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC TestStand_Instrument_Simulation_SolarPanelUUT__Set__Name(
	TestStand_Instrument_Simulation_SolarPanelUUT __instance,
	char * Name,
	CDotNetHandle * __exception);

// Type: TestStand_Instrument_Simulation.UUTPin
int CVIFUNC TestStand_Instrument_Simulation_UUTPin__Create(
	TestStand_Instrument_Simulation_UUTPin * __instance,
	CDotNetHandle * __exception);
int CVIFUNC TestStand_Instrument_Simulation_UUTPin_readVoltage(
	TestStand_Instrument_Simulation_UUTPin __instance,
	TestStand_Instrument_Simulation_SignalTypes signalType,
	int numSamples,
	int samplesPerSecond,
	double ** result,
	ssize_t * __resultLength,
	CDotNetHandle * __exception);
int CVIFUNC TestStand_Instrument_Simulation_UUTPin_applyVoltage(
	TestStand_Instrument_Simulation_UUTPin __instance,
	TestStand_Instrument_Simulation_Signal signal,
	CDotNetHandle * __exception);
int CVIFUNC TestStand_Instrument_Simulation_UUTPin__Get__Signal(
	TestStand_Instrument_Simulation_UUTPin __instance,
	TestStand_Instrument_Simulation_Signal * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC TestStand_Instrument_Simulation_UUTPin__Set__Signal(
	TestStand_Instrument_Simulation_UUTPin __instance,
	TestStand_Instrument_Simulation_Signal Signal,
	CDotNetHandle * __exception);

// Type: TestStand_Instrument_Simulation.UUTOutputPin
int CVIFUNC TestStand_Instrument_Simulation_UUTOutputPin__Create(
	TestStand_Instrument_Simulation_UUTOutputPin * __instance,
	double accuracy,
	TestStand_Instrument_Simulation_Signal baseline,
	CDotNetHandle * __exception);
int CVIFUNC TestStand_Instrument_Simulation_UUTOutputPin_connectToPin(
	TestStand_Instrument_Simulation_UUTOutputPin __instance,
	TestStand_Instrument_Simulation_UUTPin dependentPin,
	double * coefficients,
	ssize_t __coefficientsLength,
	double resistance,
	CDotNetHandle * __exception);
int CVIFUNC TestStand_Instrument_Simulation_UUTOutputPin_setBaselineSignal(
	TestStand_Instrument_Simulation_UUTOutputPin __instance,
	TestStand_Instrument_Simulation_Signal baseline,
	CDotNetHandle * __exception);
int CVIFUNC TestStand_Instrument_Simulation_UUTOutputPin_readVoltage(
	TestStand_Instrument_Simulation_UUTOutputPin __instance,
	TestStand_Instrument_Simulation_SignalTypes signalType,
	int numSamples,
	int samplesPerSecond,
	double ** result,
	ssize_t * __resultLength,
	CDotNetHandle * __exception);
int CVIFUNC TestStand_Instrument_Simulation_UUTOutputPin_readResistance(
	TestStand_Instrument_Simulation_UUTOutputPin __instance,
	TestStand_Instrument_Simulation_UUTInputPin pin,
	double * resistance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC TestStand_Instrument_Simulation_UUTOutputPin_applyVoltage(
	TestStand_Instrument_Simulation_UUTOutputPin __instance,
	TestStand_Instrument_Simulation_Signal signal,
	CDotNetHandle * __exception);
int CVIFUNC TestStand_Instrument_Simulation_UUTOutputPin__Get__Accuracy(
	TestStand_Instrument_Simulation_UUTOutputPin __instance,
	double * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC TestStand_Instrument_Simulation_UUTOutputPin__Set__Accuracy(
	TestStand_Instrument_Simulation_UUTOutputPin __instance,
	double Accuracy,
	CDotNetHandle * __exception);
int CVIFUNC TestStand_Instrument_Simulation_UUTOutputPin__Get__Signal(
	TestStand_Instrument_Simulation_UUTOutputPin __instance,
	TestStand_Instrument_Simulation_Signal * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC TestStand_Instrument_Simulation_UUTOutputPin__Set__Signal(
	TestStand_Instrument_Simulation_UUTOutputPin __instance,
	TestStand_Instrument_Simulation_Signal Signal,
	CDotNetHandle * __exception);

// Type: TestStand_Instrument_Simulation.UUTInputPin
int CVIFUNC TestStand_Instrument_Simulation_UUTInputPin__Create(
	TestStand_Instrument_Simulation_UUTInputPin * __instance,
	CDotNetHandle * __exception);
int CVIFUNC TestStand_Instrument_Simulation_UUTInputPin_applyVoltage(
	TestStand_Instrument_Simulation_UUTInputPin __instance,
	TestStand_Instrument_Simulation_Signal signal,
	CDotNetHandle * __exception);
int CVIFUNC TestStand_Instrument_Simulation_UUTInputPin_readVoltage(
	TestStand_Instrument_Simulation_UUTInputPin __instance,
	TestStand_Instrument_Simulation_SignalTypes signalType,
	int numSamples,
	int samplesPerSecond,
	double ** result,
	ssize_t * __resultLength,
	CDotNetHandle * __exception);
int CVIFUNC TestStand_Instrument_Simulation_UUTInputPin__Get__Signal(
	TestStand_Instrument_Simulation_UUTInputPin __instance,
	TestStand_Instrument_Simulation_Signal * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC TestStand_Instrument_Simulation_UUTInputPin__Set__Signal(
	TestStand_Instrument_Simulation_UUTInputPin __instance,
	TestStand_Instrument_Simulation_Signal Signal,
	CDotNetHandle * __exception);

// Type: TestStand_Instrument_Simulation.UUTEnvironmentPin
int CVIFUNC TestStand_Instrument_Simulation_UUTEnvironmentPin__Create(
	TestStand_Instrument_Simulation_UUTEnvironmentPin * __instance,
	TestStand_Instrument_Simulation_AmbientSettings setting,
	CDotNetHandle * __exception);
int CVIFUNC TestStand_Instrument_Simulation_UUTEnvironmentPin_readVoltage(
	TestStand_Instrument_Simulation_UUTEnvironmentPin __instance,
	TestStand_Instrument_Simulation_SignalTypes signalType,
	int numSamples,
	int samplesPerSecond,
	double ** result,
	ssize_t * __resultLength,
	CDotNetHandle * __exception);
int CVIFUNC TestStand_Instrument_Simulation_UUTEnvironmentPin_applyVoltage(
	TestStand_Instrument_Simulation_UUTEnvironmentPin __instance,
	TestStand_Instrument_Simulation_Signal signal,
	CDotNetHandle * __exception);
int CVIFUNC TestStand_Instrument_Simulation_UUTEnvironmentPin__Get__Signal(
	TestStand_Instrument_Simulation_UUTEnvironmentPin __instance,
	TestStand_Instrument_Simulation_Signal * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC TestStand_Instrument_Simulation_UUTEnvironmentPin__Set__Signal(
	TestStand_Instrument_Simulation_UUTEnvironmentPin __instance,
	TestStand_Instrument_Simulation_Signal Signal,
	CDotNetHandle * __exception);

// Type: TestStand_Instrument_Simulation.InstrumentManager
int CVIFUNC TestStand_Instrument_Simulation_InstrumentManager_serializeInstruments(
	CDotNetHandle * __exception);
int CVIFUNC TestStand_Instrument_Simulation_InstrumentManager_updateInstrumentState(
	TestStand_Instrument_Simulation_SimulatedInstrument instrument,
	CDotNetHandle * __exception);
int CVIFUNC TestStand_Instrument_Simulation_InstrumentManager_deserializeInstruments(
	CDotNetHandle * __exception);
int CVIFUNC TestStand_Instrument_Simulation_InstrumentManager_reserveInstrument(
	char * resourceName,
	TestStand_Instrument_Simulation_SimulatedInstrument instrument,
	CDotNetHandle * __exception);
int CVIFUNC TestStand_Instrument_Simulation_InstrumentManager_unreserveInstrument(
	char * resourceName,
	CDotNetHandle * __exception);
int CVIFUNC TestStand_Instrument_Simulation_InstrumentManager_getDMMByName(
	char * resourceName,
	TestStand_Instrument_Simulation_DMM * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC TestStand_Instrument_Simulation_InstrumentManager_getPowerSupplyByName(
	char * resourceName,
	TestStand_Instrument_Simulation_PowerSupply * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC TestStand_Instrument_Simulation_InstrumentManager_getScopeByName(
	char * resourceName,
	TestStand_Instrument_Simulation_Oscilloscope * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC TestStand_Instrument_Simulation_InstrumentManager__Get__instruments(
	System_Collections_Generic_Dictionary_T2 * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC TestStand_Instrument_Simulation_InstrumentManager__Set__instruments(
	System_Collections_Generic_Dictionary_T2 instruments,
	CDotNetHandle * __exception);

// Type: TestStand_Instrument_Simulation.SimulatedInstrument
int CVIFUNC TestStand_Instrument_Simulation_SimulatedInstrument__Create(
	TestStand_Instrument_Simulation_SimulatedInstrument * __instance,
	char * resourceName,
	CDotNetHandle * __exception);
int CVIFUNC TestStand_Instrument_Simulation_SimulatedInstrument_Close(
	TestStand_Instrument_Simulation_SimulatedInstrument __instance,
	CDotNetHandle * __exception);
int CVIFUNC TestStand_Instrument_Simulation_SimulatedInstrument_configure(
	TestStand_Instrument_Simulation_SimulatedInstrument __instance,
	CDotNetHandle * __exception);
int CVIFUNC TestStand_Instrument_Simulation_SimulatedInstrument__Get__ResourceName(
	TestStand_Instrument_Simulation_SimulatedInstrument __instance,
	char ** __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC TestStand_Instrument_Simulation_SimulatedInstrument__Set__ResourceName(
	TestStand_Instrument_Simulation_SimulatedInstrument __instance,
	char * ResourceName,
	CDotNetHandle * __exception);

// Type: TestStand_Instrument_Simulation.DMM
int CVIFUNC TestStand_Instrument_Simulation_DMM__Create(
	TestStand_Instrument_Simulation_DMM * __instance,
	char * resourceName,
	CDotNetHandle * __exception);
int CVIFUNC TestStand_Instrument_Simulation_DMM_configure(
	TestStand_Instrument_Simulation_DMM __instance,
	TestStand_Instrument_Simulation_SignalTypes signalType,
	CDotNetHandle * __exception);
int CVIFUNC TestStand_Instrument_Simulation_DMM_readVoltage(
	TestStand_Instrument_Simulation_DMM __instance,
	int channel,
	int socket,
	double * result,
	CDotNetHandle * __exception);
int CVIFUNC TestStand_Instrument_Simulation_DMM_readTemperature(
	TestStand_Instrument_Simulation_DMM __instance,
	int channel,
	int socket,
	double * result,
	TestStand_Instrument_Simulation_DMM_TemperatureSensorType sensorType,
	CDotNetHandle * __exception);
int CVIFUNC TestStand_Instrument_Simulation_DMM_readResistance(
	TestStand_Instrument_Simulation_DMM __instance,
	int channel1,
	int channel2,
	int socket,
	double * result,
	CDotNetHandle * __exception);
int CVIFUNC TestStand_Instrument_Simulation_DMM_Close(
	TestStand_Instrument_Simulation_DMM __instance,
	CDotNetHandle * __exception);
int CVIFUNC TestStand_Instrument_Simulation_DMM_configure_1(
	TestStand_Instrument_Simulation_DMM __instance,
	CDotNetHandle * __exception);
int CVIFUNC TestStand_Instrument_Simulation_DMM__Get__ResourceName(
	TestStand_Instrument_Simulation_DMM __instance,
	char ** __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC TestStand_Instrument_Simulation_DMM__Set__ResourceName(
	TestStand_Instrument_Simulation_DMM __instance,
	char * ResourceName,
	CDotNetHandle * __exception);

// Type: TestStand_Instrument_Simulation.PowerSupply
int CVIFUNC TestStand_Instrument_Simulation_PowerSupply__Create(
	TestStand_Instrument_Simulation_PowerSupply * __instance,
	char * resourceName,
	CDotNetHandle * __exception);
int CVIFUNC TestStand_Instrument_Simulation_PowerSupply_generateOutputVoltageDC(
	TestStand_Instrument_Simulation_PowerSupply __instance,
	int channel,
	int socket,
	double outputVoltage,
	CDotNetHandle * __exception);
int CVIFUNC TestStand_Instrument_Simulation_PowerSupply_generateOutputVoltageAC(
	TestStand_Instrument_Simulation_PowerSupply __instance,
	int channel,
	int socket,
	double outputVoltage,
	double frequency,
	double amplitude,
	CDotNetHandle * __exception);
int CVIFUNC TestStand_Instrument_Simulation_PowerSupply_Close(
	TestStand_Instrument_Simulation_PowerSupply __instance,
	CDotNetHandle * __exception);
int CVIFUNC TestStand_Instrument_Simulation_PowerSupply_configure(
	TestStand_Instrument_Simulation_PowerSupply __instance,
	CDotNetHandle * __exception);
int CVIFUNC TestStand_Instrument_Simulation_PowerSupply__Get__ResourceName(
	TestStand_Instrument_Simulation_PowerSupply __instance,
	char ** __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC TestStand_Instrument_Simulation_PowerSupply__Set__ResourceName(
	TestStand_Instrument_Simulation_PowerSupply __instance,
	char * ResourceName,
	CDotNetHandle * __exception);

// Type: TestStand_Instrument_Simulation.Oscilloscope
int CVIFUNC TestStand_Instrument_Simulation_Oscilloscope__Create(
	TestStand_Instrument_Simulation_Oscilloscope * __instance,
	char * resourceName,
	CDotNetHandle * __exception);
int CVIFUNC TestStand_Instrument_Simulation_Oscilloscope_configure(
	TestStand_Instrument_Simulation_Oscilloscope __instance,
	int numSamples,
	int samplesPerSecond,
	CDotNetHandle * __exception);
int CVIFUNC TestStand_Instrument_Simulation_Oscilloscope_readWaveform(
	TestStand_Instrument_Simulation_Oscilloscope __instance,
	int channel,
	int socket,
	double * result,
	ssize_t * __resultLength,
	CDotNetHandle * __exception);
int CVIFUNC TestStand_Instrument_Simulation_Oscilloscope_Close(
	TestStand_Instrument_Simulation_Oscilloscope __instance,
	CDotNetHandle * __exception);
int CVIFUNC TestStand_Instrument_Simulation_Oscilloscope_configure_1(
	TestStand_Instrument_Simulation_Oscilloscope __instance,
	CDotNetHandle * __exception);
int CVIFUNC TestStand_Instrument_Simulation_Oscilloscope__Get__NumSamples(
	TestStand_Instrument_Simulation_Oscilloscope __instance,
	int * __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC TestStand_Instrument_Simulation_Oscilloscope__Set__NumSamples(
	TestStand_Instrument_Simulation_Oscilloscope __instance,
	int NumSamples,
	CDotNetHandle * __exception);
int CVIFUNC TestStand_Instrument_Simulation_Oscilloscope__Get__ResourceName(
	TestStand_Instrument_Simulation_Oscilloscope __instance,
	char ** __returnValue,
	CDotNetHandle * __exception);
int CVIFUNC TestStand_Instrument_Simulation_Oscilloscope__Set__ResourceName(
	TestStand_Instrument_Simulation_Oscilloscope __instance,
	char * ResourceName,
	CDotNetHandle * __exception);


#ifdef __cplusplus
}
#endif
