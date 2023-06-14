#include <LoRaConnection.h>
#include <Arduino.h>

#define LORA_SERIAL Serial3

/*
 * Public methods declaration
 */

void LoRaConnection::InitConnection()
{
    memset(loraBuffer, 0, 256);
    LORA_SERIAL.begin(9600); // Start the LoRa serial at a BaudRate of 9600

    Serial.println("Send key");
    this->SendKey((char *)"2B7E151628AED2A6ABF7158809CF4F3C", (char *)"2B7E151628AED2A6ABF7158809CF4F3C", (char *)"2B7E151628AED2A6ABF7158809CF4F3C");

    Serial.println("Set mode");
    this->SetDeviceMode(LWOTAA);
    this->SetDataRate(DR0, EU868);

    Serial.println("Set channels");
    this->SetChannel(0, 868.1);
    this->SetChannel(1, 868.3);
    this->SetChannel(2, 868.5);

    Serial.println("Set class type");
    this->SetClassType(CLASS_A);

    Serial.println("Set port");
    this->SetPort(8);

    Serial.println("Set windows");
    this->SetReceiveWindow(1, 0, 868.1);
    this->SetReceiveWindow(2, 869.5, DR3);

    Serial.println("Set duty cycle");
    this->EnableDutyCycle(false);
    this->EnableDutyCycleJoin(false);

    Serial.println("Set power");
    this->SetPowerMode(HIGH_POWER);
}

void LoRaConnection::InitialSetup()
{
    Serial.println("Setup start");
    memset(loraBuffer, 0, 256);
    Serial.println("buffer");

    LORA_SERIAL.begin(9600);
    Serial.println("Serial start");

    // Serial.println("LoRa Initial");
    this->SendCommand("AT\r\n");

    this->ReadBuffer(loraBuffer, MAX_BUFFER_LENGTH, 10);

    Serial.println(loraBuffer);
    Serial.println(strstr(loraBuffer, "+AT: OK"));

    if (strstr(loraBuffer, "+AT: OK"))
    {
        // DevEui
        this->SendCommand((char *)"AT+ID=DevEui\r\n");
        this->ReadBuffer(loraBuffer, MAX_BUFFER_LENGTH, 10);
        Serial.println(loraBuffer);

        // DevAddr
        this->SendCommand((char *)"AT+ID=DevAddr\r\n");
        this->ReadBuffer(loraBuffer, MAX_BUFFER_LENGTH, 10);
        Serial.println(loraBuffer);

        // AppEUI
        this->SendCommand((char *)"AT+ID=AppEui\r\n");
        this->ReadBuffer(loraBuffer, MAX_BUFFER_LENGTH, 10);
        Serial.println(loraBuffer);
    }
    else
    {
        Serial.println("No Module");
    }
}

void LoRaConnection::SendKey(char *networkSessionKey, char *applicationSessionKey, char *applicationKey)
{
    char command[64];

    if (networkSessionKey)
    {
        memset(command, 0, 64);
        sprintf(command, "AT+KEY=NWKSKEY,\"%s\"\r\n", networkSessionKey);
        this->SendCommand(command);
        delay(LORA_TIMEOUT);
    }

    if (applicationSessionKey)
    {
        memset(command, 0, 64);
        sprintf(command, "AT+KEY=APPSKEY,\"%s\"\r\n", applicationSessionKey);
        this->SendCommand(command);
        delay(LORA_TIMEOUT);
    }

    if (applicationKey)
    {
        memset(command, 0, 64);
        sprintf(command, "AT+KEY= APPKEY,\"%s\"\r\n", applicationKey);
        this->SendCommand(command);
        delay(LORA_TIMEOUT);
    }
}

void LoRaConnection::SetDeviceMode(device_mode mode)
{
    switch (mode)
    {
    case device_mode::LWABP:
        this->SendCommand((char *)"AT+MODE=LWABP\r\n");
        break;
    case device_mode::LWOTAA:
        this->SendCommand((char *)"AT+MODE=LWOTAA\r\n");
        break;
    default:
        Serial.println("Device mode not found");
        break;
    }
}

void LoRaConnection::SetDataRate(data_rate dataRate, physical_type physicalType)
{
    char command[32];

    switch (physicalType)
    {
    case physical_type::EU434:
        this->SendCommand((char *)"AT+DR=EU433\r\n");
        break;
    case physical_type::EU868:
        this->SendCommand((char *)"AT+DR=EU868\r\n");
        break;
    default:
        Serial.println("Physical type not found");
    }

    delay(LORA_TIMEOUT);

    memset(command, 0, 32);
    sprintf(command, "AT+DR=%d\r\n", dataRate);
    this->SendCommand(command);

    delay(LORA_TIMEOUT);
}

void LoRaConnection::SetChannel(unsigned char channel, float frequency)
{
    char command[32];
    memset(command, 0, 32);

    sprintf(command, "AT+CH=%d,%d.%d\r\n", channel, (short)frequency, short(frequency * 10) % 10);
    this->SendCommand(command);

    delay(LORA_TIMEOUT);
}

void LoRaConnection::SetClassType(class_type type)
{
    switch (type)
    {
    case class_type::CLASS_A:
        this->SendCommand((char *)"AT+CLASS=A\r\n");
        break;
    case class_type::CLASS_C:
        this->SendCommand((char *)"AT+CLASS=C\r\n");
        break;
    default:
        Serial.println("Class type not found");
    }

    delay(LORA_TIMEOUT);
}

void LoRaConnection::SetPort(unsigned char port)
{
    char command[32];
    memset(command, 0, 32);

    sprintf(command, "AT+PORT=%d\r\n", port);
    this->SendCommand(command);

    delay(LORA_TIMEOUT);
}

void LoRaConnection::SetReceiveWindow(unsigned int window, unsigned char channel, float frequency)
{
    char command[32];
    memset(command, 0, 32);

    sprintf(command, "AT+RXWIN%d=%d,%d.%d\r\n", window, channel, (short)frequency, short(frequency * 10) % 10);
    this->SendCommand(command);

    delay(LORA_TIMEOUT);
}

void LoRaConnection::SetReceiveWindow(unsigned int window, float frequency, data_rate dataRate)
{
    char cmd[32];
    memset(cmd, 0, 32);

    sprintf(cmd, "AT+RXWIN%d=%d.%d,%d\r\n", window, (short)frequency, short(frequency * 10) % 10, dataRate);
    this->SendCommand(cmd);

    delay(LORA_TIMEOUT);
}

void LoRaConnection::EnableDutyCycle(bool enabled)
{
    if (enabled)
    {
        this->SendCommand((char *)"AT+LW=DC, ON\r\n");
    }
    else
    {
        this->SendCommand((char *)"AT+LW=DC, OFF\r\n");
    }

    delay(LORA_TIMEOUT);
}

void LoRaConnection::EnableDutyCycleJoin(bool enabled)
{
    if (enabled)
    {
        this->SendCommand((char *)"AT+LW=JDC,ON\r\n");
    }
    else
    {
        this->SendCommand((char *)"AT+LW=JDC,OFF\r\n");
    }

    delay(LORA_TIMEOUT);
}

void LoRaConnection::SetPowerMode(power_mode powerMode)
{
    switch (powerMode)
    {
    case power_mode::LOW_POWER:
        this->SendCommand((char *)"AT+LOWPOWER\r\n");
        break;
    case power_mode::MEDIUM_POWER:
        this->SendCommand((char *)"AT+POWER=7\r\n");
        break;
    case power_mode::HIGH_POWER:
        this->SendCommand((char *)"AT+POWER=14\r\n");
        break;
    default:
        Serial.println("Power mode not found");
        break;
    }
}

void LoRaConnection::SetPowerMode(short power)
{
    char command[32];
    memset(command, 0, 32);

    sprintf(command, "AT+POWER=%d\r\n", power);
    this->SendCommand(command);

    delay(LORA_TIMEOUT);
}

bool LoRaConnection::SendPacket(char *buffer, unsigned char timeout)
{
    unsigned char bufferLength = strlen(buffer);

    while (LORA_SERIAL.available())
        LORA_SERIAL.read();

    this->SendCommand((char *)"AT+MSG=\"");
    for (unsigned char i = 0; i < bufferLength; i++)
        LORA_SERIAL.write(buffer[i]);
    this->SendCommand((char *)"\"\r\n");

    while (true)
    {
        memset(loraBuffer, 0, MAX_BUFFER_LENGTH);
        this->ReadBuffer(loraBuffer, MAX_BUFFER_LENGTH, timeout);

        if (strstr(loraBuffer, "+MSG: Done"))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

bool LoRaConnection::SendPacketCayenne(unsigned char *buffer, unsigned char length, unsigned char timeout)
{
    char temp[3] = {0};

    while (LORA_SERIAL.available())
    {
        LORA_SERIAL.read();
    }

    this->SendCommand((char *)"AT+MSGHEX=\"");

    for (unsigned char i = 0; i < length; i++)
    {
        sprintf(temp, "%02x", buffer[i]);
        LORA_SERIAL.write(temp);
    }

    this->SendCommand((char *)"\"\r\n");

    memset(loraBuffer, 0, MAX_BUFFER_LENGTH);
    this->ReadBuffer(loraBuffer, MAX_BUFFER_LENGTH, timeout);

    if (strstr(loraBuffer, "+MSGHEX: Done"))
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool LoRaConnection::SetOTAAJoin(join_cmd command, unsigned char timeout)
{
    char *ptr;

    if (command == JOIN)
    {
        this->SendCommand("AT+JOIN\r\n");
    }
    else if (command == FORCE)
    {
        this->SendCommand("AT+JOIN=FORCE\r\n");
    }

    delay(LORA_TIMEOUT);

    memset(loraBuffer, 0, MAX_BUFFER_LENGTH);
    this->ReadBuffer(loraBuffer, MAX_BUFFER_LENGTH, timeout);
    Serial.println(loraBuffer);

    ptr = strstr(loraBuffer, "+JOIN: Join failed");
    if (ptr)
    {
        return false;
    }

    ptr = strstr(loraBuffer, "+JOIN: LoRaWAN modem is busy");
    if (ptr)
    {
        return false;
    }

    return true;
}

bool LoRaConnection::SetOTAAJoin(otaa_join command, unsigned char timeout)
{
    char *ptr;
    
    if(command == JOIN) {
        this->SendCommand("AT+JOIN\r\n");
    } else if(command == FORCE) {
        this->SendCommand("AT+JOIN=FORCE\r\n"); 
    }
 
    delay(LORA_TIMEOUT);
    
    memset(loraBuffer, 0, MAX_BUFFER_LENGTH);
    this->ReadBuffer(loraBuffer, MAX_BUFFER_LENGTH, timeout); 

    ptr = strstr(loraBuffer, "+JOIN: Join failed");
    if(ptr)return false;
    ptr = strstr(loraBuffer, "+JOIN: LoRaWAN modem is busy");
    if(ptr)return false;
    
    return true;
}

/*
 * Private methods declaration
 */
void LoRaConnection::SendCommand(char *commandToSend)
{
    LORA_SERIAL.print(commandToSend);
}

short LoRaConnection::ReadBuffer(char *buffer, short length, unsigned short timeout)
{
    short i = 0;
    unsigned long timerStart, timerEnd;

    timerStart = millis();

    while (1)
    {
        if (i < length)
        {
            while (LORA_SERIAL.available())
            {
                char c = LORA_SERIAL.read();
                buffer[i++] = c;
            }
        }

        timerEnd = millis();
        if (timerEnd - timerStart > 1000 * timeout)
            break;
    }

    return i;
}