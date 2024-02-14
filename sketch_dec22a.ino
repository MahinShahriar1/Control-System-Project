// #include <Adafruit_Sensor.h>
void setup() {
  Serial.begin(9600);
  pinMode(7,INPUT);  // put your setup code here, to run once:

}

void loop() {
  bool value = digitalRead(7);
  Serial.println(value);
  //delay(50);
  // put your main code here, to run repeatedly:

}
