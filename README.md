# Ultrasonic Obstacle Detection and Servo Control

**By //CREATIVE OJAS**

## Overview

This project demonstrates the use of an **Arduino** board in combination with an **HC-SR04 ultrasonic sensor** and a **servo motor** to create a simple **obstacle detection system**. The system detects nearby objects and activates a servo motor in response. It also lights up an LED to indicate when the object is detected within a certain range.

---

## Components Required

- **Arduino Uno** (or any compatible board)
- **HC-SR04 Ultrasonic Distance Sensor**
- **SG90 Servo Motor** (or any compatible servo)
- **LED** (for indicating object detection)
- **220-ohm Resistor** (for LED)
- **Jumper Wires**
- **Breadboard** (optional but recommended for prototyping)

---

## Wiring Diagram

The **HC-SR04** ultrasonic sensor, **SG90 Servo Motor**, and **LED** are connected to the Arduino as follows:

| **Component**            | **Arduino Pin** |
|--------------------------|-----------------|
| HC-SR04 **Trig Pin**      | D6              |
| HC-SR04 **Echo Pin**      | D5              |
| **Servo Signal Pin**     | D7              |
| **LED Positive (+)**      | D8              |
| **LED Negative (–)**      | GND (through a 220-ohm resistor) |
| HC-SR04 **VCC**           | 5V              |
| HC-SR04 **GND**           | GND             |
| Servo **VCC**             | 5V              |
| Servo **GND**             | GND             |

---

## How It Works

This project uses the **HC-SR04 ultrasonic sensor** to measure the distance between the sensor and nearby objects. When the sensor detects an object within a specified range (in this case, **less than 10 cm**), it triggers the following actions:

1. **LED Indicator**: The **LED** connected to the Arduino lights up to indicate that an object is detected.
2. **Servo Motor Movement**: The **servo motor** attached to the Arduino moves in a pre-programmed pattern:
   - It moves from **0°** to **95°** and back to **0°**.
   - This movement can be used to visually indicate the object's detection or to perform actions like activating a mechanism.

The distance is measured multiple times to ensure accurate readings, and an average is taken to reduce the effects of noise in the sensor data.

---

## Code Explanation

- The **Servo library** is used to control the servo motor.
- The **HC-SR04 ultrasonic sensor** works by sending out a pulse and measuring how long it takes for the pulse to return after hitting an object. This time is then converted into a distance measurement.
- The **LED** is turned **on** when the detected distance is less than 10 cm, and turned **off** otherwise.
- The **servo motor** is only activated when an object is detected close enough. It moves to **0°**, waits for 500 ms, then moves to **95°**, waits again, and finally stops.

---

## Project Workflow

1. The Arduino sends a trigger pulse to the HC-SR04.
2. The HC-SR04 sensor sends out a sound wave and waits for the echo.
3. The time taken for the echo to return is measured by the Arduino, and the distance is calculated.
4. If the distance is less than 10 cm, the Arduino lights up the LED and moves the servo motor.
5. The servo motor's position is adjusted between 0° and 95° to demonstrate a simple response to object detection.
6. If the object is not detected (i.e., the distance is greater than 10 cm), the LED remains off, and the servo motor is idle.

---

## Features

- **Obstacle Detection**: Detects objects using the HC-SR04 ultrasonic sensor.
- **Servo Control**: Activates a servo motor based on distance input.
- **Visual Indicator**: Uses an LED to signal when an object is detected.
- **Stable Measurements**: The code averages three distance readings for more reliable measurements.
  
---

## Usage

1. **Connect the Components**: Follow the wiring diagram above to connect the HC-SR04 sensor, servo motor, and LED to your Arduino.
2. **Upload the Code**: Open the Arduino IDE, copy and paste the provided code, and upload it to your Arduino board.
3. **Testing**: Once uploaded, the system will begin measuring distances. When an object is detected within 10 cm, the servo will move and the LED will turn on.
4. **Modify for Your Needs**: You can adjust the distance threshold or change the servo movement pattern to suit your needs. For example, you can use the servo to open a door or control a robot's movement based on obstacle proximity.

---

## Future Improvements

- **Multiple Servo Motors**: Control multiple servos based on different distance thresholds.
- **Sound or Alarm**: Trigger a sound alarm when an object is detected within a critical range.
- **Wireless Control**: Use wireless communication (e.g., Bluetooth or WiFi) to send data to a mobile app or other devices.
- **Machine Learning**: Incorporate machine learning to recognize specific objects based on distance and patterns.

---

## License

This project is open-source and available for anyone to use, modify, and distribute under the MIT license.

---

## Credits

This project is created and developed by **//CREATIVE OJAS**.
