// -------------------------------------------------
// Copyright (c) 2021 HiBit <https://www.hibit.dev>
// -------------------------------------------------

#define BLUE_PIN 3
#define GREEN_PIN 5
#define RED_PIN 6

void setup()
{
  pinMode(BLUE_PIN, OUTPUT);
  pinMode(GREEN_PIN, OUTPUT);
  pinMode(RED_PIN, OUTPUT);
}

void loop()
{
  increaseLight(BLUE_PIN);
  decreaseLight(BLUE_PIN);

  increaseLight(GREEN_PIN);
  decreaseLight(GREEN_PIN);

  increaseLight(RED_PIN);
  decreaseLight(RED_PIN);
}

void increaseLight(int ledPin)
{
  for (int i = 0; i <= 255; i++) {
    analogWrite(ledPin, i);

    delay(10);
  }
}

void decreaseLight(int ledPin)
{
  for (int i = 255; i >= 0; i--) {
    analogWrite(ledPin, i);

    delay(10);
  }
}
