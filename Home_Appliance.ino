#define ldr1 A0
#define ldr2 A1
#define ldr3 A2
#define ldr4 A3
#define flame1 2
#define flame2 3
#define Pir1 11
#define Pir2 12
#define Mq2 A4
#define relay1 6 
#define relay2 5
#define led 8
#define buzzer 9
void setup() {
  Serial.begin(9600);
  pinMode(ldr1,INPUT);
  pinMode(ldr2, INPUT);
  pinMode(ldr3,INPUT);
  pinMode(ldr4,INPUT);
  pinMode(flame1,INPUT);
  pinMode(flame2,INPUT);
  pinMode(Pir1,INPUT);
  pinMode(Pir2,INPUT);
  pinMode(Mq2,INPUT);
  pinMode(led,OUTPUT);
  pinMode(buzzer,OUTPUT);
  pinMode(relay1,OUTPUT);
  pinMode(relay2,OUTPUT);
  digitalWrite(relay1,HIGH);
  digitalWrite(relay2,HIGH);
  digitalWrite(buzzer,LOW);
  
  
  // put your setup code here, to run once:
}


void loop() {
  bool Val_pir1 = digitalRead(Pir1);
  bool Val_pir2 = digitalRead(Pir2);
  int Val_Mq2 = analogRead(Mq2);
  int Val_ldr1 = analogRead(ldr1);
  int Val_ldr2 = analogRead(ldr2);
  int Val_ldr3 = analogRead(ldr3);
  int Val_ldr4 = analogRead(ldr4);
  bool Val_flame1 = digitalRead(flame1);
  bool Val_flame2 = digitalRead(flame2);
  //Serial.println("Flame1");
  //Serial.println(Val_flame1);
  //Serial.println("Flame2");
  //Serial.println(Val_flame2);
  //delay(1000);
  //Serial.println("Pir");
  //Serial.println(Val_pir1);
  //delay(1000);
  Val_Mq2 = map(Val_Mq2,0,1023,0,100);
  Serial.println("Mq2");
  Serial.println(Val_Mq2);
  Val_ldr1 = map(Val_ldr1,0,1023,0,100);
  Val_ldr2 = map(Val_ldr2,0,1023,0,100);
  Val_ldr3 = map(Val_ldr3,0,1023,0,100);
  Val_ldr4 = map(Val_ldr4,0,1023,0,100);
  //Serial.println("LDR");
  //Serial.println(Val_ldr4);
  //delay(1000);
  
  if ((Val_pir1 == 1 || Val_pir2 == 1) && (Val_ldr1 < 60 || Val_ldr2 < 60 || Val_ldr3 < 60 || Val_ldr4 < 60))
  {
    digitalWrite(led,HIGH);
    delay(2000);
  }
  else
  {
    digitalWrite(led,LOW);
  }
  
  
  if (Val_pir1 == 1 || Val_pir2 == 1)
  {
    digitalWrite(relay1,LOW);
     delay(2000);
  }
  else
  {
    digitalWrite(relay1,HIGH);
    
  }

  if (Val_flame1 == 0 || Val_flame2 == 0)
  {
    digitalWrite(buzzer,HIGH);
    //delay(1000);
    digitalWrite(relay2,LOW);
    delay(5000);//pump
    
  }
  else
  {
    digitalWrite(relay2,HIGH);
    digitalWrite(buzzer,LOW);
  }
  if (Val_Mq2 > 16)
  {
    digitalWrite(buzzer,HIGH);

  }
  else
  {
   digitalWrite(buzzer,LOW); 
  }
  }
  
  
  
  // put your main code here, to run repeatedly:
