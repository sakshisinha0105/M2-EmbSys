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

#### **PIN DIAGRAM OF ARDUINO UNO**
<br>

![pin diag of arduino uno](https://user-images.githubusercontent.com/98824269/157294037-50fd32b4-f786-477b-9895-81f767e953e1.png)

* Vin: This is the input voltage pin of the Arduino board used to provide input supply from an external power source.

* 5V: This pin of the Arduino board is used as a regulated power supply voltage and it is used to give supply to the board as well as onboard components.

* 3.3V: This pin of the board is used to provide a supply of 3.3V which is generated from a voltage regulator on the board

* GND: This pin of the board is used to ground the Arduino board.

* Reset: This pin of the board is used to reset the microcontroller. It is used to Resets the microcontroller.

**Analog Pins**: The pins A0 to A5 are used as an analog input and it is in the range of 0-5V.

**Digital Pins**: The pins 0 to 13 are used as a digital input or output for the Arduino board.

**Serial Pins**: These pins are also known as a UART pin. It is used for communication between the Arduino board and a computer or other devices. The transmitter pin number 1 and receiver pin number 0 is used to transmit and receive the data resp.

External Interrupt Pins: This pin of the Arduino board is used to produce the External interrupt and it is done by pin numbers 2 and 3.

PWM Pins: This pins of the board is used to convert the digital signal into an analog by varying the width of the Pulse. The pin numbers 3,5,6,9,10 and 11 are used as a PWM pin.

SPI Pins: This is the Serial Peripheral Interface pin, it is used to maintain SPI communication with the help of the SPI library. SPI pins include:

SS: Pin number 10 is used as a Slave Select
MOSI: Pin number 11 is used as a Master Out Slave In
MISO: Pin number 12 is used as a Master In Slave Out
SCK: Pin number 13 is used as a Serial Clock
LED Pin:  The board has an inbuilt LED using digital pin-13. The LED glows only when the digital pin becomes high.

AREF Pin: This is an analog reference pin of the Arduino board. It is used to provide a reference voltage from an external power supply.


