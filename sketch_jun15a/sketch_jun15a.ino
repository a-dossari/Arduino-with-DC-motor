//the connection of L298N motor driver in the pins of arduino board
int enA = 10;
int enB = 5;
int in1 = 9;
int in2 = 8;
int in3 = 7;
int in4 = 6;

void setup() {
//configure the pins as output
pinMode (enA, OUTPUT);
pinMode (enB, OUTPUT);
pinMode (in1, OUTPUT);
pinMode (in2, OUTPUT);
pinMode (in3, OUTPUT);
pinMode (in4, OUTPUT);
}

void loop() {
//the buttons are connected in pins 13 and 1 in the arduino board, they read the digital values of these pins
int but1= digitalRead (13);
int but2= digitalRead (1);

if (but1 == HIGH){ //if the button 1 is pressed
//the pins will be enabled in case of "HIGH" and disabled in case of "LOW"
digitalWrite (enA, HIGH);
digitalWrite (in1, LOW);
digitalWrite (in2, HIGH);
delay(1000);
digitalWrite (in1, HIGH);
digitalWrite (in2, HIGH);
delay(500);
digitalWrite (in1, HIGH);
digitalWrite (in2, LOW);
delay(1000);
digitalWrite (in1, LOW);
digitalWrite (in2, LOW);
delay(500);
digitalWrite (enA, LOW);
}

else if (but2 == HIGH){ //if the button 2 is pressed
digitalWrite (enB, HIGH);
digitalWrite (in3, LOW);
digitalWrite (in4, HIGH);
delay(1000);
digitalWrite (in3, HIGH);
digitalWrite (in4, HIGH);
delay(500);
digitalWrite (in3, HIGH);
digitalWrite (in4, LOW);
delay(1000);
digitalWrite (in3, LOW);
digitalWrite (in4, LOW);
delay(500);
digitalWrite (enB, LOW);
}
}
