int fla = 8;
int val = HIGH;

void setup() {
  Serial.begin(9600);
  pinMode(fla,INPUT);
  
  // put your setup code here, to run once:

}

void loop() {
   bool val = digitalRead(fla);
  // val = map(val, 0, 1024, 0, 100);
  Serial.println(val);
    
  
  delay(100); 
  // put your main code here, to run repeatedly:

}
