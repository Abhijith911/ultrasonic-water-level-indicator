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

📁 Project Files
ultrasonic-water-level-indicator/
├── README.md
└── water_level_indicator.ino

