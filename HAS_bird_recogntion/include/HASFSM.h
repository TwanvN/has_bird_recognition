#ifndef HAS_FSM_H
#define HAS_FSM_H

#include <FSM.h>
#include <Mic.h>
#include <SensorData.h>
#include <LoRaConnection.h>
#include <SDCardReaderAndWriter.h>
#include <NeuralNetwork.h>
#include "FirmwareLoader.h"
#include <MFCC.h>
#include <CayenneLPP.h>

#define SEND_INTERVAL 15 //Minutes

enum FSM_States {
  STATE_INITIALIZING,
  STATE_INITIALIZING_FAILED,
  STATE_LISTENING,
  STATE_GATHERING_DATA,
  STATE_SENDING,
  STATE_NOT_CONNECTED,
  STATE_TOTAL
};

enum FSM_Events {
  INITIALIZING_FAILED,
  SENSORS_INITIALIZED,
  BIRD_FOUND,
  SEND_INTERVAL_NOT_REACHED,
  SEND_INTERVAL_REACHED,
  JOIN_FAILED,
  SEND_SUCCEEDED,
  JOIN_SUCCESFULL,
  CONNECT_FAILED,
  CONNECTION_TIMEOUT,
  EVENTS_STATE_EXECUTED,
  EVENTS_TOTAL
};

class HASFSM {
public:
  explicit HASFSM();
  void InitHASFSM();
  FSM birdSensorFSM = FSM(STATE_TOTAL, EVENTS_TOTAL);

private:
  void Initializing();
  void Listening();
  void GatheringData();
  void Sending();
  void NotConnected();
  static void InitializingFailed();

  Mic						mic;
  SensorData              	sensorData;
  LoRaConnection          	connection;
  SDCardReaderAndWriter   	sd;
  NeuralNetwork 			*neuralNetwork;
  tfLiteModel_t           	model;
  MFCC 						mfcc;
  CayenneLPP 				cayenne = CayenneLPP(51);

  int 						lastRecognizedBird;
  float 					recognitionAccuracy;
  uint8_t 					correctMeasurements;
  int 						batteryPercentage;
  uint32_t 					lastTimeSent;
  uint32_t 					lastTimeGSPGathered;
};

#endif