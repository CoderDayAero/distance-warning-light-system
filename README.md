# Distance-Warning-Light-System


## Overview

This project is an Arduino based distance warning system that uses an ultrasonic sensor to measure how close an object is. Depending on the detected distance, different LEDs activate to show the warning level:

* Green LED: Object is far away and the area is safe
* Yellow LED: Object is getting closer and caution is needed
* Red LED: Object is too close and a warning is triggered
* Buzzer: Activates when an object reaches the mid range zone (beeps normal) and the danger zone (beeps faster)


## Components Used

* Arduino Uno R3
* HC-SR04 Ultrasonic Distance Sensor
* (1)Red LED
* (1)Yellow LED
* (1)Green LED
* Piezo Buzzer
* Breadboard
* (~14)Jumper wires
* 220Ω resistors



## How It Works

The HC-SR04 ultrasonic sensor sends out sound waves and measures how long it takes for the waves to bounce back. The Arduino uses this time measurement to calculate the distance of an object.

The system responds based on the measured distance:

Distance: Far away = Green LED on | Meaning: Safe
Distance: Medium distance = Yellow LED on + medium paced buzzer | Meaning: Warning
Distance: Close = Red LED on + fast paced buzzer | Meaning: Danger



The Arduino program:

* Calculates the distance in centimeters
* Controls the LEDs based on distance thresholds
* Activates the buzzer when an object is too close


## Challenges and Solutions

### LEDs Not Turning On

At first, the LEDs did not work because they were connected incorrectly on the breadboard. I learned that LEDs have polarity, meaning the positive and negative legs must be connected in the correct direction.

### Unstable Sensor Readings

The LEDs would sometimes switch between colors when there was no object nearby. This was fixed by adjusting the distance thresholds and improving the logic in the code to make the readings more consistent.

### Buzzer was too loud

I initially had used an active buzzer as i thought it would be easier to code with but it ended up making too much noise so i had to swtich to a passive buzzer so i could change the tone.


## What I Learned

* How to troubleshoot electronics hardware
* How to combine multiple components into a functioning system
* How to make changes mid project


## Future Improvements


* Adding an LCD display to show the exact distance
* Using a potentiometer to adjust warning distances
* Improving accuracy by averaging sensor readings


## Demo


https://github.com/user-attachments/assets/97ef9db1-4c6f-4a23-8528-c90e21fee0f6



