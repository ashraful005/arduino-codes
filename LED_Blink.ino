int led=13;  //LED connected to the 13th digital pin of Arduino Uno
void setup( ){
  pinMode(led,OUTPUT);  //Led pin is declared a output pin
}
void loop(){
  digitalWrite(led, HIGH);   //LED will be ON
  delay(1000);               // Wait for 1s
  digitalWrite(led, LOW);    //LED will be OFF
  delay(1000);               // Wait for 1s
}
