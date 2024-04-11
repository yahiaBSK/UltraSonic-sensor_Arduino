
//library call
#include <LiquidCrystal_I2C.h>
#include <Wire.h>

//connect to the lcd by the i2c ship
LiquidCrystal_I2C lcd(0x20, 20,4);
//the ultrasonic pins definition
int trigPin = 7;
int echoPin = 6;


void setup() {

  //static prints in the lcd
  lcd.init();
  lcd.setCursor(0, 0);
  lcd.println("ULTRASONIC SENSOR.");
  lcd.setCursor(0, 1);
  lcd.println("MADE BY -YAHIA.BSK-");
  //determine which pin is a reciever and which is sender
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

}

void loop() {
  
  //send a signal every 10µs and stop it every 2µs
  //and the time between the both moments is what we recieve to determine the duration
  digitalWrite(trigPin, 1);
  delayMicroseconds(10);
  digitalWrite(trigPin, 0);
  delayMicroseconds(2);
  //waiting for the received signals when available
  //if the echoPin received a high digital signal start counting the duration
  //then change the duration we recieved(cm/µs) to a distance
  //by converting it to meter per second(*10e-2*10e-6) multiplied the sound speed(343m/s) then devided by 2
  long duration_recieved = pulseIn(echoPin, 1);
  float distance = ( (duration_recieved*(10e-6))*(10e-2) )*343/2;
  //print the results on the lcd
  lcd.setCursor(0, 2);
  lcd.print("DURATION = "); lcd.print((duration_recieved*(10e-6))*(10e-2)); lcd.println(" m/s");
  lcd.setCursor(0, 3);
  lcd.print("DISTANCE = "); lcd.print(distance); lcd.println(" m");

}
