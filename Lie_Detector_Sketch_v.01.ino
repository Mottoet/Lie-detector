#define PIN_RED    23 // GIOP23
#define PIN_GREEN  22 // GIOP22
#define PIN_BLUE   21 // GIOP21








void setup() {
  /*
  // Initializes the communication from the serial.
  pinMode(PIN_RED,   OUTPUT);
  pinMode(PIN_GREEN, OUTPUT);
  pinMode(PIN_BLUE,  OUTPUT);
  */

Serial.begin(9600);
pinMode(19, INPUT); // Setup for leads off detection LO+
pinMode(18, INPUT); // Setup for leads off detection LO-

}

void loop() {
  // put your main code here, to run repeatedly:
  
  /*
  FOR CHANGING THE LED'S COLOR ( Ranging from 0-255)
  analogWrite(PIN_RED,   0);
  analogWrite(PIN_GREEN, 100);
  analogWrite(PIN_BLUE,  150);
  delay(2000); //Keeps the light on for 2 sek.

  But, we made a function instead called setColor(); (Look below for the function):
  function = setColor( int R, int G, int B)
  Takes the PIN_(Color/ R,G,B) and sets the values.
  ex. setColor(100, 150, 250)
  */

//Lo- = D18 (ESP32 Board)
//Lo+ = D19 (ESP32 Board)
//Output = Analog(25) (ESP32 Board)



 //Heartbeat loop
if((digitalRead(19) == 1) || (digitalRead(18) == 1)){
   Serial.println('!');
}
else {
  // send the value of analog input "0"/25:
  Serial.println(analogRead(25));
}
//Wait, so serial data doesnt saturate.
delay(1);
}

/*
void setColor(int R, int G, int B){
  analogWrite(PIN_RED, R);
  analogWrite(PIN_GREEN, G);
  analogWrite(PIN_BLUE, B);
}
*/
