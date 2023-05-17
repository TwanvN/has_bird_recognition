#ifndef HAS_FSM_H
#define HAS_FSM_H

#include <FSM.h>
#include <LoRaConnection.h>
#include <SensorData.h>
#include <SDCardReaderAndWriter.h>

#define SEND_INTERVAL 15 //Minutes

enum FSM_States {
  STATE_START,
  STATE_INITIALIZING,
  STATE_LISTENING,
  STATE_GATHERING_DATA,
  STATE_SENDING,
  STATE_NOT_CONNECTED,
  STATE_TOTAL
};

enum FSM_Events {
  EVENT_START,
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

enum Available_Birds {
  ANAS_PLATYRHYNCHOS_LINNAEUS,
  COLUMBA_PALUMBUS_LINNAEUS,
  FRINGILLA_COELEBS_LINNAEUS,
  PARUS_MAJOR_LINNAEUS,
  PASSER_DOMESTICUS,
  PHYLLOSCOPUS_COLLYBITA,
  PHYLLOSCOPUS_TROCHILUS,
  STURNUS_VULGARIS_LINNAEUS,
  TROGLODYTES_TROGLODTYES,
  TURDUS_MERULA_LINNAEUS
};

extern FSM birdSensorFSM;

void InitHASFSM();

#endif