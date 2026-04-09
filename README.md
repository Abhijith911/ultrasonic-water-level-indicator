# 💧 Ultrasonic Water Level Indicator

<p align="center">
  <img src="https://img.shields.io/badge/Platform-Arduino%20UNO-teal?style=for-the-badge&logo=arduino"/>
  <img src="https://img.shields.io/badge/Sensor-HC--SR04-blue?style=for-the-badge"/>
  <img src="https://img.shields.io/badge/Display-WS2812B%20RGB%20LED-red?style=for-the-badge"/>
  <img src="https://img.shields.io/badge/Language-C-lightgrey?style=for-the-badge&logo=c"/>
</p>

<p align="center">
  An Arduino-based non-contact water level monitoring system using an <strong>HC-SR04 ultrasonic sensor</strong><br/>
  with visual feedback through a <strong>WS2812B RGB LED strip</strong>.
</p>

---

## 🎯 Overview

| Property | Details |
|---|---|
| Platform | Arduino UNO |
| Sensor | HC-SR04 Ultrasonic |
| Display | WS2812B RGB LED Strip (12 LEDs) |
| Language | C (Arduino) |
| Measurement | Non-contact distance to water surface |

---

## ✨ Features

- 📡 Non-contact water level measurement via ultrasonic sensing
- 🌈 Visual level indication through color-coded RGB LEDs
- 🔄 Continuous real-time updates
- ⚡ Simple, low-cost hardware setup

---

## 🌈 LED Color Zones

| LEDs | Color | Tank Status |
|---|---|---|
| Bottom LEDs | 🔴 Red | Low water level |
| Middle LEDs | 🟡 Yellow | Medium level |
| Top LEDs | 🟢 Green | Full tank |

---

## ⚙️ How It Works

1. The HC-SR04 emits ultrasonic pulses toward the water surface and measures the echo return time
2. Arduino calculates the distance between the sensor and the water surface
3. Distance is mapped proportionally to the number of LEDs to illuminate
4. LED color zones update in real time to reflect the current tank level

---

## 🧱 Components

| Component | Quantity |
|---|---|
| Arduino UNO | 1 |
| HC-SR04 Ultrasonic Sensor | 1 |
| WS2812B RGB LED Strip (12 LEDs) | 1 |
| 330Ω Resistor (signal stability) | 1 |
| Jumper wires | As needed |
| 5V USB / Power supply | 1 |

---

## 🔌 Wiring

| HC-SR04 Pin | Arduino Pin |
|---|---|
| VCC | 5V |
| GND | GND |
| TRIG | D9 |
| ECHO | D10 |

| WS2812B Pin | Arduino Pin |
|---|---|
| VCC | 5V |
| GND | GND |
| DIN | D6 (via 330Ω resistor) |

---

## 📦 Installation

### 1. Install Required Library
In Arduino IDE, go to **Sketch → Include Library → Manage Libraries** and install:
- **FastLED** (for WS2812B control)

### 2. Clone the Repository
```bash
git clone https://github.com/Abhijith911/ultrasonic-water-level-indicator.git
cd ultrasonic-water-level-indicator
```

### 3. Upload to Arduino
- Open `water_level_indicator.ino` in Arduino IDE
- Select board: **Arduino UNO**
- Select the correct COM port
- Click **Upload**

---

## 📂 Project Structure

```
ultrasonic-water-level-indicator/
├── water_level_indicator.ino   # Main Arduino sketch
└── README.md
```

---

## 🛠️ Tech Stack

| Category | Technology |
|---|---|
| Microcontroller | Arduino UNO |
| Firmware Language | C (Arduino) |
| Sensor | HC-SR04 Ultrasonic |
| LED Control | WS2812B + FastLED library |

---

## 🚀 Future Improvements

- Add a buzzer alert for critically low water levels
- Display exact percentage on an OLED screen
- Add Wi-Fi (ESP8266) for remote level monitoring
- Integrate automatic pump control based on level thresholds

---
