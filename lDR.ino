#define ldr A0
void setup() {
  Serial.begin(9600);
  
  // put your setup code here, to run once:

}

void loop() {
  int val = analogRead(ldr);
  val = map(val, 0, 1024, 0, 100);
  Serial.println(val);
  delay(100); 
  // put your main code here, to run repeatedly:

}
