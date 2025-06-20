# SignSpeak: Real-Time Gesture Recognition Glove

SignSpeak is a wearable assistive device that translates sign language gestures into real-time speech using an Arduino Nano, flex sensors, HC-05 Bluetooth module, and a mobile app. The glove interprets finger gestures, builds complete sentences, and vocalizes them with multilingual support.

## 🔧 Features

- Real-time gesture recognition using 5 flex sensors
- Sentence formation logic using binary mapping
- Text-to-Speech (TTS) in multiple languages (planned)
- Modular and expandable design (e.g., with MPU6050 for ASL)

## 📷 Demo

🎥 [Watch Video](https://drive.google.com/file/d/1XI2NKlmikSzVkBMguM419DEreKOTybcL/view)

## 🔩 Hardware Used

- Arduino Nano
- 5x Flex Sensors
- Jumper wires, Breadboard/PCB


## 📁 Repository Structure

- `arduino/` - Arduino source code
- `hardware/` - Circuit diagrams and BOM
- `docs/` - Patent summary, flowchart
- `media/` - Demo video and media assets

## 📜 Patent Information

This project is registered under VIT IPR Cell (Document No: 02-IPR-R003).


### 🚀 Future Plans

- Integration of accelerometer for ASL gestures
- AI/ML-based multilingual translation using TFLite/Google Translate API
- Glove optimization for commercial use
