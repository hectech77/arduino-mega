int ledP = 5;
void setup() {
  
Serial.begin(9600);
Serial.print("Inicializando Programa");
Serial.print("encender led");
pinMode(ledP , OUTPUT);

}

void loop() {
  
  Serial.print("PIN 5 -> ON"); 
  digitalWrite(ledP , HIGH); 
  delay(1000);               
   Serial.print("PIN 5 -> OFF"); 
  digitalWrite(ledP , LOW);  
  delay(1000); 
  }
