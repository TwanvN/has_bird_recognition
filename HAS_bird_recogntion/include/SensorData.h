#ifndef SENSOR_DATA_H
#define SENSOR_DATA_H

#include <DFRobot_B_LUX_V30B.h>
#include <Adafruit_AHTX0.h>

class SensorData {
    public:
        void InitSensors();         //Method to init all the sensors

        float GetLightIntensity();  //Method which returns the light intensity of the SEN0390 light sensor

        float GetTemperature();     //Method to get the temperature from the SEN0527 T/H sensor
        float GetHumidity();        //Method to get the humidity from the SEN0527 T/H sensor

        SensorData() {}
        ~SensorData(){}

    private:
        DFRobot_B_LUX_V30B lightSensor = DFRobot_B_LUX_V30B(1, 2, 3);
        Adafruit_AHTX0 tempAndHumiditySensor;
};

#endif