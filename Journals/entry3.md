**Journal Entry 3 - Circuit Simulation (Cirkit Designer)**

Okay so today I wanted to test if my circuit actually works before I solder everything together and potentially fry my ESP32. Found this website called Cirkit Designer that lets you simulate circuits and even run code on a virtual ESP32. Seemed too good to be true but I gave it a shot.

First attempt was a complete flop ngl. I picked some random ESP32 model from the component library without checking if it supports simulation. Uploaded my motor control code and nothing happened. The motors just sat there like 😐. Wasted like 30 minutes troubleshooting before realizing the model I selected literally can't be simulated. Rip. 


| Circuit Diagram | Cirkit Designer Simulation Warning |
| :---: | :---: |
| ![Circuit Diagram](https://cdn.hackclub.com/019f9c25-6c50-7daf-8ac1-14e3e2ee3814/2026-07-26_07-39-35.png) | ![Cirkit Designer Simulation Warning](https://cdn.hackclub.com/019f9c25-a90e-707a-bd3e-2f7ac61f4c45/2026-07-26_07-39-59.png) |


Started over and found the ESP32-S3 model which apparently works with the simulator. Swapped it out and re-did all my connections. This time when I uploaded the code something actually happened?? The virtual motors started spinning and I literally screamed.

|  |  |
| :---: | :---: |
| ![image](https://cdn.hackclub.com/019f9c36-3ced-7455-a27e-9422d766a3c1/2026-07-26_07-38-09.png) | ![image](https://cdn.hackclub.com/019f9c37-908d-7bca-b4e0-1e0a68851318/image.png) |

---

I wrote some basic movement code - forward for 3 seconds, stop, backward for 3 seconds, stop. Just wanted to see if the L298N driver responds properly. And it worked?? The simulation showed the motors rotating in both directions and everything.

|  |  |
| :---: | :---: |
| ![image](https://cdn.hackclub.com/019f9c40-fdd9-786d-a102-ab5b7bdb588a/Screenshot%202026-07-24%20at%2017.46.35.png) | ![image](https://cdn.hackclub.com/019f9c40-5e64-7820-8169-829c80e8913b/Screenshot%202026-07-24%20at%2017.47.11.png) |

---

The L298N part was kinda finicky though. Had to play around with the PWM values cause the motor speed was either 0 or 100 with nothing in between at first. Messed with the frequency settings and eventually got it working smooth.

|  |  |
| :---: | :---: |
| ![image](https://cdn.hackclub.com/019f9c3b-dfa5-7e54-ade9-e4383b9e325f/2026-07-26_08-07-34.png) | ![image](https://cdn.hackclub.com/019f9c3d-4a27-771b-931b-186e10f440c6/2026-07-26_08-09-30.png) |

---

|  |  |  |
| :---: | :---: | :---: |
| ![image](https://cdn.hackclub.com/019f9c41-eafe-7a72-afe2-7c4e5d3e86d8/2026-07-26_08-07-56.png) | ![image](https://cdn.hackclub.com/019f9c42-0a8c-72fa-8992-b0a6cd6a3701/2026-07-26_08-07-46.png) | ![image](https://cdn.hackclub.com/019f9c42-b331-76c1-81a7-94de15bab9f8/2026-07-26_08-08-05.png) |


Now I'm confident enough to start assembling the real thing tomorrow. Lowkey nervous but ready to lock in.
