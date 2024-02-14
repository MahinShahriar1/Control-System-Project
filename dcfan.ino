#define relay1 8
#define relay2 12
void setup() {
  Serial.begin(9600);
  pinMode(relay1, OUTPUT);
  pinMode(relay2, OUTPUT);
  digitalWrite(relay1, HIGH);
  digitalWrite(relay2, HIGH);
  // pinMode(relay2, OUTPUT);
}
  // put your setup code here, to run once:


void loop() {
  //bool RelayOne = digitalRead(relay1);
 digitalWrite(relay1,LOW);
 delay(5000);
 digitalWrite(relay1,HIGH);
 delay(1000);
 digitalWrite(relay2,LOW);
 delay(5000);
 digitalWrite(relay2,HIGH);
 delay(1000);
  // put your main code here, to run repeatedly:

}
