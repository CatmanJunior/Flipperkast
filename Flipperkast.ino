#include <Servo.h> 

Servo servo1;  // create servo object to control the first servo
Servo servo2;  // create servo object to control the second servo

const int buttonPin1 = 2;  // the number of the pushbutton pin
const int buttonPin2 = 3;  // the number of the second pushbutton pin

int buttonState1 = 0;      // variable for reading the pushbutton status
int buttonState2 = 0;      // variable for reading the second pushbutton status

void setup() {
  servo1.attach(9);        // attaches the first servo on pin 9 to the servo object
  servo2.attach(10);       // attaches the second servo on pin 10 to the servo object

  pinMode(buttonPin1, INPUT_PULLUP); // initialize the pushbutton pin as an input
  pinMode(buttonPin2, INPUT_PULLUP); // initialize the second pushbutton pin as an input
}

void loop() {
  // read the state of the pushbuttons value:
  buttonState1 = digitalRead(buttonPin1);
  buttonState2 = digitalRead(buttonPin2);

  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (buttonState1 == HIGH) {   
    // turn servo 1 to position 180
    servo1.write(180);
  } else {
    // turn servo 1 to position 0
    servo1.write(0);
  }

  // check if the second pushbutton is pressed. If it is, the buttonState is HIGH:
  if (buttonState2 == HIGH) {
    // turn servo 2 to position 180
    servo2.write(180);
  } else {
    // turn servo 2 to position 0
    servo2.write(0);
  }
}