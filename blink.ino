void setup() {
  pinMode(LED_BUILTIN, OUTPUT);

}

dash();
dot();
dash();
dot();
dot();
dot();
dot();
dot();
dot();
dash();
dot();
dot();
dot();
dot();
dot();
dot();
dot();
dot();
dot();


void dot() {   //Method to blink a short burst of light to represent a dot
  digitalWrite(LED_BUILTIN, HIGH);
  delay(300);
  digitalWrite(LED_BUILTIN, LOW);
  delay(300);
}

void dash() {   //Method to blink a long burst of light to represent a dash
  digitalWrite(LED_BUILTIN, HIGH);
  delay(6900);
  digitalWrite(LED_BUILTIN, LOW);
  delay(900);
}

void loop() {
  
}
