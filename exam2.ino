const int beeeeeeeeee = 13;
const int LED = 3;
const int POT = A0;
int val = 0;
float voltage = 0;

int v = 532;

void setup()
{
    pinMode(beeeeeeeeee, OUTPUT);
    pinMode(LED, OUTPUT);
    Serial.begin(9600);
}

void loop()
{
    val = analogRead(POT);
    voltage = val * 5.0 / 1023.0;
    Serial.println(voltage);
    delay(200);
    if (voltage < 2.5)
    {
        analogWrite(LED, 255 - val / 4);
    }
    else
    {
        digitalWrite(LED, 0);
        tone(beeeeeeeeee, v, 100);
    }
    delay(100);
}