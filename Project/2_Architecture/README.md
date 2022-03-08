#### **BLOCK DIAGRAM (STRUCTURAL DIAGRAM)**
<br>

![SMV drawio](https://user-images.githubusercontent.com/98824269/157292235-72d73453-2c94-48a5-a15b-252ae613255e.png)

#### **CIRCUIT DIAGRAM (BEHAVIOURAL DIAGRAM)**
<br>

![smv simulation](https://user-images.githubusercontent.com/98824269/157292323-4d9931a3-c223-40f6-8859-6f311c08cb07.png)

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

#### **PIN DIAGRAM OF ARDUINO UNO**
