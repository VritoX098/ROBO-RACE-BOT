**Journal Entry 1 - PCB Design (KiCad)**

ok so today I finally started my 4WD robot project for macondo. ngl I was lowkey stressing about where to even begin but I just decided to jump in and figure it out as I go 

I started with the PCB design in KiCad for the L298N motor driver. I know I could just buy one off the shelf but I need to show some actual PCB work for the submission.

so I spent like an hour just watching tutorials because I haven't touched KiCad in months tbh.

- started the schematic, divided it into two main sections like the guide said: power and motor driver

- added the 7805 voltage regulator for the 5V logic supply. guide says input should be 7-12V, but i'm gonna use the 3S battery pack (around 11.1V) so it should be fine

- placed the L298 IC and connected all the pins. ngl, the datasheet was confusing at first but i got there

- added the flyback diodes for back EMF protection (1N4007 ones, cheap and readily available)

- put in the filter capacitors (100µF and 0.1µF) for both motor and logic power inputs

- added a power LED so i know when the board is on. saves debugging headaches later.

---

![image](https://cdn.hackclub.com/019f938b-c858-7ada-9b84-2d99febf2038/Screenshot%202026-07-24%20at%2014.59.25.png)

---
![image](https://cdn.hackclub.com/019f938c-21ff-77b0-a56c-c60cac061d01/Screenshot%202026-07-24%20at%2014.59.36.png)

honestly, this is taking longer than i thought. the guide makes it look easy but component placement and routing is a whole different beast.

the power traces are thick af now like 1.5mm for the motor supply. dont want any voltage drop when the motors are pulling current. the signal traces are thinner cuz they just carry logic signals to the l298.

i ran into some issues with the ground plane though. the guide mentions having a solid ground plane but i kept getting drc errors when i tried to pour copper. turns out i had to change some settings in kicad for the clearance. eventually got it working after watching a quick youtube tutorial lol.

added mounting holes on the corners of the pcb like i planned. used 3mm holes so i can screw it down with standoffs. also added some test points on important signals just in case i need to debug later.

heres a pic of the final pcb render:

---
![image](https://cdn.hackclub.com/019f938d-a0b7-710a-b7a9-cb851d7e2850/Screenshot%202026-07-24%20at%2014.52.42.png)

---

![image](https://cdn.hackclub.com/019f9393-10a2-7737-a45e-1493330af98e/Screenshot%202026-07-24%20at%2014.55.55.png)

---

![image](https://cdn.hackclub.com/019f9394-19af-72ea-8187-eea0223d1ed8/Screenshot%202026-07-24%20at%2014.57.52.png)
