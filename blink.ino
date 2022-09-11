void setup() {
  pinMode(LED_BUILTIN, OUTPUT);

}

void dot() {   //Method to blink a short burst of light to represent a dot
  digitalWrite(LED_BUILTIN, HIGH);
  delay(300);
  digitalWrite(LED_BUILTIN, LOW);
  delay(300);
}

void dash() {   //Method to blink a long burst of light to represent a dash
  digitalWrite(LED_BUILTIN, HIGH);
  delay(500);
  digitalWrite(LED_BUILTIN, LOW);
  delay(500);
}

void loop()
{
  // wtite the word "khushi"
  
  dash(); //k//
  dot();
  dash();
  delay(1200);
  
  dot(); //h//
  dot();
  dot();
  dot();
  delay(1200);
  
  dot(); //u//
  dot();
  dash();
  delay(1200);
  
  dot(); //s//
  dot();
  dot();
  delay(1200);
  
  dot(); //h//
  dot();
  dot();
  dot();
  delay(1200);
  
  dot(); //i//
  dot();
  delay(1200);

}
  
