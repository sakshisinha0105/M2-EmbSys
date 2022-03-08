// include the library code:
#include <LiquidCrystal.h>
#include<Servo.h>
// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
int degree;
int servo=2;
int trigpin=8;
int echopin=10;
long duration;
int distance;

Servo myservo;
int pos=0;

double realDegree;
String lcdBuffer;
void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  degree = 0;
  realDegree = 0;
  lcd.print("Body Temperature:");
  // Print a message to the LCD.
pinMode(trigpin, OUTPUT);
pinMode(echopin, INPUT);
pinMode(7, OUTPUT);
pinMode(9, OUTPUT);
myservo.attach(servo);
myservo.write(0);
Serial.begin(9600);
}

void loop(){
  lcd.print("                ");
  degree = analogRead(0);
  realDegree = (double)degree/1024;
  realDegree *= 5;
  realDegree -= 0.5;
  realDegree *= 100;
  lcd.setCursor(0,1);
  realDegree = (9.0/5)*(realDegree) + 32;
  String output = String(realDegree) + String((char)178) + "F";
  if (realDegree>=98.6)
  {
    lcd.print("abnormal ");
    lcd.print(output);
    digitalWrite(7, HIGH);
    delay(2000);
    digitalWrite(7, LOW);
    delay(1000);
  }
  else{
    lcd.print(output);
    digitalWrite(9, HIGH);
    delay(2000);
    digitalWrite(9, LOW);
    delay(1000);
  }
  // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):
digitalWrite(trigpin, LOW);
delayMicroseconds(2);
digitalWrite(trigpin, HIGH);
delayMicroseconds(10);
digitalWrite(trigpin, LOW);
duration=pulseIn(echopin,HIGH);
distance=duration*0.034/2;
  Serial.print(distance);
  if(distance<10)
  {
    myservo.write(45);
    delay(100);
    myservo.write(90);
    delay(100);
    myservo.write(135);
    delay(100);
    myservo.write(180);
    delay(1000);
    myservo.write(0);
    delay(3000);
}
}