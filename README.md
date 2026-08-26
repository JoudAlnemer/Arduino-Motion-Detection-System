# Arduino-Motion-Detection-System

An Arduino-based motion detection system developed using an ultrasonic sensor to detect nearby objects by measuring their distance.

The system can be used for basic security and automation applications, where different outputs are activated depending on the detected distance.

⸻

About the Project

This project was developed as part of the Wireless Sensor Networks (IT-433) course.

The system uses an ultrasonic sensor to send and receive sound waves, calculate the distance to a nearby object, and respond according to predefined distance ranges.

⸻

How It Works

The ultrasonic sensor sends high-frequency sound waves through the TrigPin and waits for the reflected signal through the EchoPin.

The Arduino calculates the distance based on the time taken for the sound waves to return.

The system then activates different output pins depending on the measured distance:

* More than 150 cm → Pin 4 is activated
* Less than 50 cm → Pin 2 is activated
* Between 50 cm and 150 cm → Pin 3 is activated
* No detected object within the defined ranges → All output pins are deactivated

⸻

Functionalities

* Detects nearby objects using an ultrasonic sensor
* Measures the distance between the sensor and an object
* Calculates distance based on ultrasonic echo time
* Activates different outputs according to distance
* Can be adapted for basic security and automation applications

⸻

Hardware

* Arduino board
* Ultrasonic sensor
* LEDs or output indicators
* Connecting wires
* Breadboard

⸻

Technologies

Arduino C/C++ Ultrasonic Sensor Embedded Systems Wireless Sensor Networks

⸻

Circuit Diagram

The circuit connects the ultrasonic sensor to the Arduino and uses output pins to indicate different detected distance ranges.

⸻

### Code


The Arduino source code is available here:

[`motion_detection.ino`](motion_detection.ino)
⸻

How to Run

1. Install the Arduino IDE.
2. Connect the Arduino board to your computer.
3. Clone or download this repository.
4. Open motion_detection.ino in the Arduino IDE.
5. Connect the ultrasonic sensor and output components according to the circuit diagram.
6. Select the correct Arduino board and port.
7. Upload the code to the Arduino.
8. Place an object at different distances from the ultrasonic sensor and observe the corresponding outputs.

⸻

Demo

A demonstration video showing the project in operation can be added here.

Watch the Project Demo
https://github.com/user-attachments/assets/5d9c3fc1-958f-43dc-85fc-192bc5988dce





