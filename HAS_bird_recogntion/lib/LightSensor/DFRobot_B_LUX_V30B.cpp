/*!
 * @file DFRobot_B_LUX_V30B.cpp
 * @brief Implementations of  methods in the class of DFRobot_B_LUX_V30B
 * @copyright	Copyright (c) 2010 DFRobot Co.Ltd (http://www.dfrobot.com)
 * @licence     The MIT License (MIT)
 * @author [Fary](Fary_young@outlook.com)
 * @version  V1.0
 * @date  2020-12-03
 * @https://github.com/DFRobot/DFRobot_B_LUX_V30B
 */

#include <DFRobot_B_LUX_V30B.h>


DFRobot_B_LUX_V30B::DFRobot_B_LUX_V30B(uint8_t cEN, uint8_t scl, uint8_t sda)
{
  DF_deviceAddr = DFRobot_B_LUX_V30_IIC_Addr;
  DF_SCL = scl;
  DF_SDA = sda;
  DF_cEN = cEN;
}

void DFRobot_B_LUX_V30B::begin()
{
  pinMode(DF_SDA, OUTPUT);
  pinMode(DF_SCL, OUTPUT);
  pinMode(DF_cEN, OUTPUT);
  digitalWrite(DF_SCL, HIGH);
  digitalWrite(DF_SDA, HIGH);
  digitalWrite(DF_cEN, LOW);
  delay(1000);
  digitalWrite(DF_cEN, HIGH);
  while(lightStrengthLux()<=0);
  
}
uint8_t DFRobot_B_LUX_V30B::readMode(void)
{
  uint8_t mode;
  iicStartBit();
  if(iicSend(DF_deviceAddr+0)){
    digitalWrite(DF_SDA, LOW);
    iicStopBit();
    return 0;
    }
  if(iicSend(DFRobot_B_LUX_V30_ConfigReg)){
    digitalWrite(DF_SDA, LOW);
    iicStopBit();
    return 0;
    }
  iicStartBit();
  if(iicSend(DF_deviceAddr+1)){
    digitalWrite(DF_SDA, LOW);
    iicStopBit();
    return 0;
    }
  delay(10);
  mode=iicReadByte();
  iicSendAck(1);
  iicStopBit();
  while(lightStrengthLux()<=0);
  return mode;
}
uint8_t DFRobot_B_LUX_V30B::setMode(uint8_t isManualMode,uint8_t isCDR,uint8_t isTime)
{
  uint8_t mode =isManualMode+isCDR+isTime;
  iicStartBit();
  
  if(iicSend(DF_deviceAddr+0)){
    digitalWrite(DF_SDA, LOW);
    iicStopBit();
    return 0;
    }
  if(iicSend(DFRobot_B_LUX_V30_ConfigReg)){
    digitalWrite(DF_SDA, LOW);
    iicStopBit();
    return 0;
  }
  if(iicSend(mode)){
    digitalWrite(DF_SDA, LOW);
    iicStopBit();
    return 0;
  }
  digitalWrite(DF_SDA, LOW);
  iicStopBit();
  delay(10);
  return 1;
}
void DFRobot_B_LUX_V30B::iicStartBit()
{
  digitalWrite(DF_SCL, HIGH);
  digitalWrite(DF_SDA, HIGH);
  delayMicroseconds(5);
  digitalWrite(DF_SDA, LOW);
  delayMicroseconds(5);
  digitalWrite(DF_SCL, LOW);
  delayMicroseconds(5);
}

void DFRobot_B_LUX_V30B::iicStopBit()
{
  digitalWrite(DF_SCL, HIGH);
  digitalWrite(DF_SDA, LOW);
  delayMicroseconds(5);
  digitalWrite(DF_SDA, HIGH);
  delayMicroseconds(5);
  digitalWrite(DF_SCL, LOW);
  delayMicroseconds(5);
}

void DFRobot_B_LUX_V30B::iicSendAck(uint8_t ack)
{
  pinMode(DF_SDA, OUTPUT);
  if(ack & 0x01 ){/*ack=0,send ACK，ack=1,send NACK*/
    digitalWrite(DF_SDA, HIGH);
  }else{
    digitalWrite(DF_SDA, LOW);
  }
  digitalWrite(DF_SCL, HIGH);
  delayMicroseconds(5);
  digitalWrite(DF_SCL, LOW);
  delayMicroseconds(5);
}
uint8_t DFRobot_B_LUX_V30B::iicRecvAck()
{
  uint8_t cy=0;
  pinMode(DF_SDA, INPUT);
  digitalWrite(DF_SCL, HIGH);
  delayMicroseconds(5);
  cy=digitalRead(DF_SDA);
  digitalWrite(DF_SCL, LOW);
  digitalWrite(DF_SDA, HIGH);
  pinMode(DF_SDA, OUTPUT);
  delayMicroseconds(5);
  return cy;
}

uint8_t DFRobot_B_LUX_V30B::iicSend(uint8_t data)
{
  for(uint8_t i=0; i<8;i++){  
    if(data & (0x80)){
      digitalWrite(DF_SDA, HIGH);
    }else{
      digitalWrite(DF_SDA, LOW);
    }
    delayMicroseconds(5); 
    digitalWrite(DF_SCL, HIGH);
    delayMicroseconds(5); 
    digitalWrite(DF_SCL, LOW);
    delayMicroseconds(5); 
    data = data<<1;
  }
  return iicRecvAck();
}

uint8_t DFRobot_B_LUX_V30B::iicReadByte()
{
  uint8_t data=0;
  pinMode(DF_SDA, INPUT_PULLUP);
  for(uint8_t i=0; i<8; i++){
    digitalWrite(DF_SCL, HIGH);
    delayMicroseconds(5);
    data |= digitalRead(DF_SDA);
    digitalWrite(DF_SCL, LOW);
    delayMicroseconds(5);
    if(i<7) 
      data<<=1;
  }
  pinMode(DF_SDA, OUTPUT);
  return data;
}
uint8_t DFRobot_B_LUX_V30B::iicRead(uint8_t num, uint8_t* data)
{
  iicStartBit();
  if(iicSend(DF_deviceAddr+0)){
    digitalWrite(DF_SDA, LOW);
    iicStopBit();
    return 0;
  }
  if(iicSend(0x00)){
    digitalWrite(DF_SDA, LOW);
    iicStopBit();
    return 0;
  }
  //
  iicStartBit();
  if(iicSend(DF_deviceAddr+1)){
    digitalWrite(DF_SDA, LOW);
    iicStopBit();
    return 0;
    }
  delay(10);
  for(uint8_t i=0; i<num; i++){
    data[i]=iicReadByte();
    if(i==num-1){
      iicSendAck(NACK);//send NACK
    }else{
      iicSendAck(LIGHT_ACK);//send ACK
    }
  }
  digitalWrite(DF_SDA, LOW);
  iicStopBit();
  return 1;
}
float DFRobot_B_LUX_V30B::lightStrengthLux()
{
  uint32_t value = 0;
  uint8_t data[6];
  if(iicRead(4,data)){
  value = data[3];
  value = (value<<8)|data[2];
  value = (value<<8)|data[1];
  value = (value<<8)|data[0];
  return ((float)value*1.4) / 1000;
  }
  return -1;
}
















