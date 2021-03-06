## SANITATION, MASK VENDING AND BODY TEMPERATURE SENSING SYSTEM USING ARDUINO (S.M.V. SYSTEM)
***
### <ins>TABLE OF CONTENT</ins>
1. INTRODUCTION                                     
   #### 1.1 PROBLEM STATEMENT
   #### 1.2 MOTIVATION
2. 1_Requirements
3. 2_Architecture
4. 3_Implementation
5. 4_TestPlanAndOutput
6. 6_ImagesAndVideos
7. 5_Report
8. 7_Other/REFERENCE

***
### **1. INTRODUCTION**
After the novel Corona Virus outbreak, govt. and public around the world have finally pushed themselves towards the hygienic way of living and proper sanitation.
People are using proper sanitation processes and trying to make their work place, house etc. sanitized as much as they can. Sanitizers, temperature sensors and mask have become mostly equal to mandatory and we can also see govt. providing these things in the vastly used public areas. 
So, here i am introducing a system or say a project that has capability to provide basic sanitation in public as well as private places. Our system’s crucial features are: Sensing temperature, dispensing sanitizer and vending mask. 
We can use this system at crowded, mild-crowded and private places for better and basic sanitation to all the beings passing through the system.

####  **1.1 Problem Statement**
Looking at the current pandemic situation, we have various kit and systems for precaution from the flu which are sort of expensive and unavailable at some areas of the country.
As we have seen and experienced that people forget about the sanitation and keeping mask with them when they go out.
People take temperature fluctuation of the body very lightly that might increase the chances of spreading the flu.

#### **1.2 Motivation**
Looking at the current scenario of this epidemic, we are proposing an idea of complete precaution system which sense your body temperature, remind and vend you mask and provide sanitizer.
This system promotes contactless body temperature sensing.
The system is affordable and can be used at private as well as public levels.
This system promotes sanitation and hygienic habit in every person to prevent us from these kind of flu and contagious diseases.
<br>

#### **2. 1_REQUIREMENTS**
#### HIGH LEVEL REQUIREMENTS
|RID|DESCRIPTION|
|----|-----|
|HLR1|It shall sense the person passing by.|
|HLR2|It shall vend the sanitizer after sensing the person's hand near by.|
|HLR3|It shall check the temperature after passing the previous test.|
|HLR4|It shall display the temperature of body as well as command .|

#### LOW LEVEL REQUIREMENTS
|RID|DESCRIPTION|
|----|-----|
|LLR1|Red LED should blink after sensing the person.|
|LLR2|The buzzer should sound simultaneously to remind.|
|LLR3|After Sanitizing Green LED should blink to proceed.|
|LLR4|It shall be affordable and can be easy to carry.|

#### SOFTWARE REQUIREMENTS
Arduino IDE(for coding and .hex file)<br>
Simulide(for simulation)

#### **3. 2_Architecture**
#### **BLOCK DIAGRAM (STRUCTURAL DIAGRAM)**
<br>

![SMV drawio](https://user-images.githubusercontent.com/98824269/157292235-72d73453-2c94-48a5-a15b-252ae613255e.png)

#### **CIRCUIT DIAGRAM (BEHAVIOURAL DIAGRAM)**
<br>

![smv simulation](https://user-images.githubusercontent.com/98824269/157292323-4d9931a3-c223-40f6-8859-6f311c08cb07.png)

#### **FLOW DIAGRAM**
![smv flow diagram](https://user-images.githubusercontent.com/98824269/157298302-e7e195f2-6768-4c23-9f1b-190add0316a7.png)


#### **COMPONENTS OF SMV SYSTEM**
1. **ARDUINO UNO** 

* Arduino Uno is a microcontroller board based on the ATmega328P (datasheet).
* It has 14 digital input/output pins (of which 6 can be used as PWM outputs), 6 analog inputs, a 16 MHz ceramic resonator (CSTCE16M0V53-R0), a USB connection, a power jack, an ICSP header and a reset button.
2. **ULTRASONIC SENSOR** (HC-SR04)
* An ultrasonic sensor measures the distance between its transmitter and an obstacle in front using ultrasonic sound waves (operational at 40 KHz) beyond the human audible sound wave range. 
* The transmitter element sends out the ultrasonic wave which is reflected from the target and is picked up by the receiver module. 
* Using the time-of-flight principle and the known speed of sound (~340 m/s), the distance between the sensor and the target is calculated.
3. **TEMPERATURE SENSOR**
* They are devices to measure temperature readings through electrical signals. 
* The sensor is made up of two metals, which generate electrical voltage or resistance once it notices a change in temperature. 
* This can be air temperature, liquid temperature or the temperature of solid matter.
4. **BUZZER**
* It's simple, tone(buzzer, 1000) sends a 1KHz sound signal to pin 9, delay(1000) pause the program for one second and noTone(buzzer) stops the signal sound. 
5. **LCD DISPLAY**
* The LiquidCrystal library allows you to control LCD displays with the 16-pin interface. 
* The LCDs have a parallel interface, meaning that the microcontroller has to manipulate several interface pins at once to control the display.
6. **LED**
* There are 2 LEDs interfaced : GREEN AND RED
* These LEDs are for reminder output purpose to show the next procedure.
7. **SERVO MOTOR (ACTUATOR)**
* A servo motor is the most common position-controlled actuator. 
* It works on the conventional servo-mechanism principle, where a rotary potentiometer measures the position of the shaft based on the varying resistance and feeds it to a comparator. 
* The comparator computes the difference between the reference position value from the controller against the actual position and sends the amplified error signal to the motor. The error amplification is usually a PID loop.

#### **3_Implementation**
#### **SIMULATION**
![smv simulation](https://user-images.githubusercontent.com/98824269/157297364-2d11a546-ec3b-480d-8ca7-8b739df2652e.png)
