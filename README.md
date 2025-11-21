# Ultrasonic Water Level Indicator

A simple Arduino-based system that measures the water level inside a tank using an **HC-SR04 ultrasonic sensor** and displays the level through a **WS2812B RGB LED strip**.  
This mini-project provides a visual and non-contact method for monitoring tank levels.  

---

## 🚀 Features

- Non-contact water level measurement  
- Distance measurement using **HC-SR04 ultrasonic sensor**  
- Visual indication using **WS2812B RGB LED strip**  
- Color zones:
  - **Red** → Low water  
  - **Yellow** → Medium level  
  - **Green** → Full tank  
- Real-time level updates  

---

## 🧱 Components Used

- Arduino UNO  
- HC-SR04 Ultrasonic Sensor  
- WS2812B RGB LED strip (12 LEDs)  
- 330Ω resistor (signal stability)  
- Jumper wires  
- 5V USB/Power supply  

---

## ⚙ Working Principle

1. The ultrasonic sensor sends sound waves toward the water surface and measures the time for the echo to return.  
2. Arduino calculates the distance between sensor and water surface.  
3. The distance is mapped to the number of LEDs to turn ON.  
4. LED color zones represent tank status:
   - Bottom LEDs → **Red** (Low Level)  
   - Middle LEDs → **Yellow** (Medium Level)  
   - Top LEDs → **Green** (Full Tank)  
5. Display updates continuously.  

---

## 🧾 Arduino Code

```cpp
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
```

📁 Project Files
ultrasonic-water-level-indicator/
├── README.md
└── water_level_indicator.ino

