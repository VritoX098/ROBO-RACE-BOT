Today I Wired up the 3S 18650 battery holder. Those batteries are heavy af btw. 

This part was tricky cause the L298N needs 12V from the battery but the ESP32 needs 5V. The L298N has a built-in 5V regulator so I decided to use that to power the ESP32. Connected the battery + to L298N VCC, battery to L298N GND, then L298N 5V output to ESP32 VIN. Simple in theory but took me a while to figure out.

|  |  |
| :---: | :---: |
| ![image](https://cdn.hackclub.com/019fa66e-b62b-7839-8b33-b471d8b7d7ac/2026-07-28_07-33-53.png) | ![image](https://cdn.hackclub.com/019fa66f-efb9-7793-b444-67186a57050b/image.png) |

I had to add a switch between the battery and L298N cause I didn't wanna keep unplugging the battery every time. Soldered an on/off toggle switch inline with the positive wire. Works perfectly.

Tested the voltage with a multimeter and got 12.4V from the battery, 5.1V from the L298N regulator. Both in spec. No magic smoke released which is a good sign.
