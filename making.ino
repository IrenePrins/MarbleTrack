#include <Servo.h>

Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards

int pos = 0;    // variable to store the servo position
int buttonRood = 3;
int buttonBlauw = 4;

int buttonStateRood = 0;
int buttonStateBlauw = 0;

void setup() {
  myservo.attach(10);  // attaches the servo on pin 9 to the servo object
  pinMode(buttonRood, INPUT);
  pinMode(buttonBlauw, INPUT);
  myservo.write(90);
}

void loop() {
  buttonStateRood = digitalRead(buttonRood);
  buttonStateBlauw= digitalRead(buttonBlauw);
  if(buttonStateRood == HIGH){
      // goes from 0 degrees to 180 degrees (LINKS)
      // in steps of 1 degree
      myservo.write(130); 
      
      
    }
  

  if(buttonStateBlauw == HIGH){
       myservo.write(50); // goes from 180 degrees to 0 degrees (RECHTS)
                  // tell servo to go to position in variable 'pos'
                             // waits 15ms for the servo to reach the position
    }
}

  
 

