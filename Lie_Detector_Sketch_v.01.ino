#define PIN_RED    23 // GIOP23
#define PIN_GREEN  22 // GIOP22
#define PIN_BLUE   21 // GIOP21



void setup() {
  // put your setup code here, to run once:
  pinMode(PIN_RED,   OUTPUT);
  pinMode(PIN_GREEN, OUTPUT);
  pinMode(PIN_BLUE,  OUTPUT);

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

setColor(200,150,50);
delay(5000);
}

void setColor(int R, int G, int B){
  analogWrite(PIN_RED, R);
  analogWrite(PIN_GREEN, G);
  analogWrite(PIN_BLUE, B);
}
