## 🧾 Arduino Code

#include <Adafruit_NeoPixel.h>
#include <HCSR04.h>

#define PIN 4
#define NUMPIXELS 12

Adafruit_NeoPixel pixels(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);
UltraSonicDistanceSensor distanceSensor(2, 3);

int current_Last_LED = 0;

void setup() {
  pixels.begin();
  pixels.clear();
  pixels.show();
  Serial.begin(9600);
}

void loop() {
  pixels.clear();

  float distance = distanceSensor.measureDistanceCm();

  current_Last_LED = map((int)distance, 16, 1, 0, 10);
  current_Last_LED = constrain(current_Last_LED, 0, 10);

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.print(" cm | LEDs On: ");
  Serial.println(current_Last_LED);

  for (int i = 0; i < current_Last_LED; i++) {
    if (i < 3) {
      pixels.setPixelColor(i, pixels.Color(255, 0, 0)); // Red
    } else if (i < 7) {
      pixels.setPixelColor(i, pixels.Color(255, 255, 0)); // Yellow
    } else {
      pixels.setPixelColor(i, pixels.Color(0, 255, 0)); // Green
    }
  }

  pixels.show();
  delay(200);
}

