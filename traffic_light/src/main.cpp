#include <Arduino.h>
#define RED 9
#define YELLOW 6
#define GREEN 3
#define SHORT_DELAY 1000
#define LONG_DELAY 3000

// put function declarations here:
int light_cycle(int);

void setup()
{
  // put your setup code here, to run once:
  pinMode(GREEN, OUTPUT);
  pinMode(YELLOW, OUTPUT);
  pinMode(RED, OUTPUT);
}

void loop()
{
  // put your main code here, to run repeatedly:
  light_cycle(GREEN);
  light_cycle(YELLOW);
  light_cycle(RED);
}

// put function definitions here:
int light_cycle(int i)
{
  int d = i == RED ? LONG_DELAY : SHORT_DELAY;
  digitalWrite(i, HIGH);
  delay(d);
  digitalWrite(i, LOW);
}