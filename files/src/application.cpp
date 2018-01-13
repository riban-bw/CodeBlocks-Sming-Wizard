#include <SmingCore/SmingCore.h>
#include "application.h"

#define LED_PIN 16

Timer procTimer;
bool bState = true;

void blink()
{
	digitalWrite(LED_PIN, bState);
	bState = !bState;
	Serial.println(bState?"ON":"OFF");
}

void init()
{
    WifiStation.enable(false);
    WifiAccessPoint.enable(false);
	pinMode(LED_PIN, OUTPUT);
	procTimer.initializeMs(1000, blink).start();
	Serial.begin(SERIAL_BAUD_RATE);
}
