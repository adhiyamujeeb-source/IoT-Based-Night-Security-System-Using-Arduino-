# IoT-Based-Night-Security-System-Using-Arduino-
## Overview

This project is a simple **IoT-based Night Security System** developed using an **Arduino Uno**, **Ultrasonic Sensor (HC-SR04)**, **LDR Sensor**, and **Buzzer**. The system is designed to monitor the entrance of a house or building during nighttime. It activates only in dark conditions and sounds an alarm if an object or person is detected within a specified distance.

---

## Features

- Automatic day and night detection using an LDR sensor.
- Security system remains inactive during daytime.
- Detects objects using an ultrasonic sensor.
- Sounds a buzzer alarm when an obstacle is detected at night.
- Simple and low-cost implementation.
- Compatible with Arduino IDE and Wokwi simulator.

---

## Components Required

- Arduino Uno
- HC-SR04 Ultrasonic Sensor
- LDR Sensor Module
- Active Buzzer
- Jumper Wires
- Breadboard (Optional)

---

## Circuit Connections

### HC-SR04 Ultrasonic Sensor

| Sensor Pin | Arduino Pin |
|------------|-------------|
| VCC | 5V |
| GND | GND |
| TRIG | D9 |
| ECHO | D10 |

### LDR Sensor Module

| Sensor Pin | Arduino Pin |
|------------|-------------|
| VCC | 5V |
| GND | GND |
| AO | A0 |
| DO | Not Connected |

### Active Buzzer

| Buzzer Pin | Arduino Pin |
|------------|-------------|
| Positive (+) | D8 |
| Negative (-) | GND |

---

## Working Principle

1. The LDR continuously monitors the surrounding light intensity.
2. During the daytime, the system remains inactive and ignores object detection.
3. When darkness is detected, the system enters security mode.
4. The ultrasonic sensor continuously measures the distance to detect nearby objects.
5. If an object is detected within **20 cm**, the Arduino activates the buzzer.
6. The buzzer turns off automatically when the object moves away or daylight returns.

---

## Arduino Pins Used

| Arduino Pin | Connected Device |
|--------------|------------------|
| A0 | LDR Sensor (AO) |
| D8 | Active Buzzer |
| D9 | HC-SR04 Trigger |
| D10 | HC-SR04 Echo |
| 5V | LDR & HC-SR04 VCC |
| GND | Common Ground |

---

## System Logic

### Daytime
- LDR detects sufficient light.
- Security system remains OFF.
- Buzzer remains OFF.

### Nighttime
- LDR detects darkness.
- Security system becomes active.
- Ultrasonic sensor starts monitoring.

### Intruder Detection
- If an object is detected within **20 cm**, the buzzer sounds.
- Alarm stops when the object moves away.

---

## Expected Output

| Light Condition | Distance | Buzzer |
|-----------------|----------|--------|
| Bright | Any Distance | OFF |
| Dark | More than 20 cm | OFF |
| Dark | Less than or Equal to 20 cm | ON |

---

## Applications

- Home Security Systems
- Office Entrance Monitoring
- Warehouse Protection
- Garage Security
- Shop Door Monitoring
- Smart Building Security

---

## Advantages

- Low-cost security solution.
- Easy to build and program.
- Automatic operation.
- Energy efficient.
- Beginner-friendly Arduino project.
- Expandable with IoT technologies.

---

## Future Enhancements

- Send SMS alerts using a GSM module.
- Send notifications through Wi-Fi using ESP8266 or ESP32.
- Capture images using an ESP32-CAM.
- Add a relay to switch on security lights.
- Integrate RFID or keypad-based access control.
- Upload intrusion data to cloud platforms such as ThingSpeak or Blynk.

---

## Software Used

- Arduino IDE
- Wokwi Simulator

---

## Project Outcome

This project demonstrates a smart night security system that activates only in dark conditions and alerts users through a buzzer when an intruder is detected near the entrance. It is an excellent beginner-level IoT and embedded systems project that introduces sensor integration, automation, and basic security concepts.

---

## Author

**Project Title:** IoT-Based Night Security System Using Arduino  
**Developed Using:** Arduino Uno, HC-SR04 Ultrasonic Sensor, LDR Sensor, and Active Buzzer
