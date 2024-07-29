#include <Arduino.h>
#define READ A5
#define BUZZ 3
#define DELAY 1000

// put function declarations here:
int buzz_cycle(int, int);

void setup()
{
  pinMode(BUZZ, OUTPUT);
  pinMode(READ, INPUT);
}

void loop()
{
  // put your main code here, to run repeatedly:
  buzz_cycle(BUZZ, analogRead(READ));
}

// put function definitions here:
int buzz_cycle(int pin, int val)
{
  analogWrite(pin, val);
}