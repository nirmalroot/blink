void setup() {
  pinMode(3, OUTPUT);        //setting pin as output
}
void loop() {
  digitalWrite(3, HIGH);     //setting pin high +5v   
  delay(1000);               //wait for 10000 sec      
  digitalWrite(3, LOW);      //setting pin as 0v
  delay(1000);               //wait for 10000 sec     
}
