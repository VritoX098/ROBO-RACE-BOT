# 4WD ESP32 Bluetooh Robo Race bot 

A fully customizable 4-wheel drive robot controlled via bluetooh using an ESP-32 and L298N motor driver.

---

## Overview 

This project is a 4WD robot built aroubd the ESP32 microcontroller. It uses an L298N motor driver to control four TT/BO gear motors, powered by a 3S 18650 li-ion battery pack. The robot can be controlled wirelessly via bluetooh using any phone or computer with a serial terminal app.

The project was designed from the ground up. All design files, firmware and documentation are included in this repo to make it fully reproducible.

- Why I build this:  

I wanted to learn hardware design form scratch. This project forced me to understand every component in detail. 

---

## Features 

- 4WD Drive System 
- Wireless Bluetooh Control 
- PWM speed control 
- Custom L298N PCB 
- 3D Printed Chassis 
- Rechargeable Battery 
- Open Source 

--- 

## Bill of materials 

ESP-32 - 1 pcs - Rs.1050 - [Esp32](https://www.daraz.com.np/products/esp32-development-board-i131400906.html?spm=a2a0e.searchlist.list.5.401f75b20hj98a)  

L298N Motor Driver - 1 pcs - Rs.400 - [Driver](https://www.daraz.com.np/products/l298-motor-driver-module-i29709.html?spm=a2a0e.searchlist.list.1.7fa6428fTRaF6h)

BO motor - 4 pcs - Rs.400 - [Motor](https://www.daraz.com.np/products/dual-shaft-bo-motor-with-wheel-4-pcs-each-i127911357.html?spm=a2a0e.searchlist.list.1.21d515d5ujz6Ja)

BO motor wheel - 4 pcs - Rs. 400 - [Wheel](https://www.daraz.com.np/products/dual-shaft-bo-motor-with-wheel-4-pcs-each-i127911357.html?spm=a2a0e.searchlist.list.1.21d515d5ujz6Ja)

18650 Li-ion Battery - 3 pcs - Rs. 100*3 [Battery](https://www.daraz.com.np/products/37v-lithium-ion-rechargeable-battery-2000mah-icr-18650-i126733067.html?spm=a2a0e.searchlist.list.1.32c4f11fdc0LtJ) 

3S battery holder - 1 pcs - Rs.165 - [Holder](https://www.daraz.com.np/products/3s-battery-holder-case-for-three-18650-lithium-ion-battery-i129213576.html?spm=a2a0e.searchlist.list.1.25f26e9bPyItZ9)

Switch - Rs.50 - [Switch](https://www.daraz.com.np/products/small-switch-i128943111.html?spm=a2a0e.searchlist.list.5.53d93c83h1LKsz)

Jumper Wires - Rs. 380 - [Jumper](https://www.daraz.com.np/products/40-pieces-male-to-female-dupont-jumper-wire-cable-20cm-two-point-five-four-millimeter-arduino-breadboard-electronics-connector-i129086146.html?spm=a2a0e.searchlist.list.1.4e166170IF8Foo)

PCB - 9$ 

Soldering Equipment - Rs.2000 - [Kit](https://www.daraz.com.np/products/soldering-iron-kit-15-in-1-60w-220v-adjustable-temperature-welding-tool-with-solder-tip-wire-desoldering-pump-tweezers-stripper-cutter-tool-bag-i107065878.html?spm=a2a0e.searchlist.list.7.57261b4bMBkb82)

Multimeter - Rs.350 - [Multimeter](https://www.daraz.com.np/products/digital-multimeter-lcd-ac-dc-measuring-voltage-current-for-home-use-campus-component-voltage-ampere-ohm-tester-electronic-tester-yellow-i154380149.html?spm=a2a0e.searchlist.list.1.2b113bf5ZhGTgL)

Total - Rs. 5,500 ( 50$ )

---

## Build Instructions 

1. Mount BO Motors using hot glue gun
2. Attach its Wheels
3. Mount L298N motor driver with M3 screws 
4. Mount ESP-32 using double side tape
5. Install Battery holder with double side tape or zip ties
6. Wire Everything ( take guide from circuit or the code )
7. Final Checks with multimeter 
8. Upload code in esp32
9. Download an app called "Bluetooth RC Controller" from chrome
10. Connect your esp32 and control your bot 

---

## Build journals 

Development notes and progress logs are kept in [`Journals/`](Journals):


## Future Improvements 

- Can be made an obstacle avoiding bot using ultrasonic sensor
- Can be made a line following robot using IR sensors
- Add a camera module for FPV 
- Add battery voltage monitoring and low battery cutoff 
- Implement a mobile app for better UI control 

---

## Acknowledgements 

- Hack club macondo for the inspiration and guidance 
- PlatformIO for amazing development environment 
- KiCad for the free and powerful PCB design tools 
- All the open-source hardware communities for their invaluable resources 

---

## Esstenial links 

[Onshape](https://cad.onshape.com/documents/eafc86527aab621078fd5eab/w/5d8777175a4e24f0c6748078/e/ad99eee1d031578527ea4a44?renderMode=0&uiState=6a6b025050455ca4e7946234)

[Cirkit Designer](https://app.cirkitdesigner.com/project/1adc6cdf-6aa5-4c88-b8ef-e48ef29de465)

---

For questions or feedback, open an issue on github or reach out on the hc slack.
