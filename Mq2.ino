#define Mq2 A5
void setup() {
  Serial.begin(9600);
  
  // put your setup code here, to run once:

}

void loop() {
  int val = analogRead(Mq2);
  val = map(val, 0, 1024, 0, 100);
  Serial.println(val);
  delay(100); 
  // put your main code here, to run repeatedly:

}
