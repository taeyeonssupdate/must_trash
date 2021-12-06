#define BLYNK_TEMPLATE_ID "XXXX"
#define BLYNK_DEVICE_NAME "XXXX"
#define BLYNK_FIRMWARE_VERSION "1.0.0"
#define BLYNK_PRINT Serial
#define APP_DEBUG
#define D1 5  // D1 = GPIO5
#define D3 0  // D3 = GPIO0
#define D5 14 // D5 = GPIO14
#include "BlynkEdgent.h"
#include "dht11.h"
int State1;
int State3;
dht11 DHT11;
float t, h;

void Value()
{
    int result = analogRead(A0);
    Blynk.virtualWrite(V4, result);
}

BLYNK_CONNECTED()
{
    Blynk.syncVirtual(V1);
    Blynk.syncVirtual(V3);
}

BLYNK_WRITE(V1)
{
    State1 = param.asInt();
    if (State1 == 1)
        digitalWrite(D1, HIGH);
    else
        digitalWrite(D1, LOW);
}

BLYNK_WRITE(V3)
{
    State3 = param.asInt();
    analogWrite(D3, State3);
    Serial.println(State3);
}

void sendSensor()
{
    int chk = DHT11.read(D5);
    t = DHT11.temperature;
    h = DHT11.humidity;
    Blynk.virtualWrite(V5, t);
    Blynk.virtualWrite(V6, h);
}

void setup()
{
    Serial.begin(115200);
    pinMode(D1, OUTPUT);
    pinMode(D3, OUTPUT);
    BlynkEdgent.begin();
    delay(2000);
    timer.setInterval(1000L, Value);
    timer.setInterval(1000L, sendSensor);
}

void loop()
{
    BlynkEdgent.run();
    timer.run();
}
