Wrote the initial code today to make the motors spin. This was actually not as bad as I expected cause I've been messing with Arduino code before.

Wrote a simple setup function with pinMode for all the GPIOs. Then a loop that spins the motors forward for 2 seconds, stops for 1 second, backward for 2 seconds, stops for 1 second. Super basic.

Uploaded the code to ESP32. Watched the serial monitor and it said "Motor Test Started" then nothing else. The motors didn't spin. I was so confused.

Debugging took forever. Checked the code multiple times its all correct. Checked the wiring again all correct. Then I realized the ESP32 wasn't getting 5V from the L298N. 

Then I tried using an external powwerbank to power esp32, and it worked but I can use it for the actual competition so I have to debug this and find some solution.

|  |  |
| :---: | :---: |
| | ![image](https://cdn.hackclub.com/019fb0df-f9ae-7bbd-a4ac-a40dbaf44092/image.png) |

The motors started spinning. The serial monitor showed all the print statements but one side of the motor was spinning but the other side wasn't, then I again checked the entire circuit.
All IN pins were connected properly, 12V from the battery to L298N, 5V from l298n to the esp32 and reuploaded the code. 



(https://cdn.hackclub.com/019fb0f0-99de-79b3-8b73-985a98d040cb/1000041824.mp4)  

(https://cdn.hackclub.com/019fb0f2-c770-76a5-bc04-3600e6d923b9/1000044374.mp4) |

But when it finally worked and I could control the robot from my phone? That was insane. The robot responds instantly with no lag. I was walking around my room steering it like an RC car.

Then I added advanced movement functions - moveForward(), moveBackward(), turnLeft(), turnRight(), stopMotor(). Each one takes a speed parameter for PWM control.

Also implemented a Bluetooth interface using the ESP32's built-in BLE. Downloaded a Serial Bluetooth Terminal app on my phone. Wrote a parser that reads incoming characters and maps them to movements. 'F' for forward, 'B' for backward, 'L' for left, 'R' for right, 'S' for stop. Speed can be adjusted with number keys 1-9.

The BLE code was the hardest part. The library kept throwing errors and I had to downgrade the ESP32 board package to version 2.0.14 or something. Took like an hour just to figure out the library compatibility issue.

The final robot: 

(https://cdn.hackclub.com/019fb0f5-d8d8-7616-8c10-8e039251e4d0/1000044375.mp4)
