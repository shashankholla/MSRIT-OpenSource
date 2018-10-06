#define IR 10
#define GREEN 12
#define RED 13

void setup() {
  pinMode(IR,INPUT);
  pinMode(GREEN,OUTPUT);
  pinMode(RED,OUTPUT);
  Serial.begin(9600);
}
String a;
int cash;
void loop() {
 
  int state = digitalRead(LDR);
  if(state == HIGH)
  {
    digitalWrite(GREEN,HIGH);
    digitalWrite(RED,LOW);
  }
  else
  {Serial.println("BLOCKED");
    digitalWrite(RED,HIGH);
    digitalWrite(GREEN,LOW);
    while(!Serial.available())
    {
      delay(1);
    }
     while(Serial.available())
  {
   a = Serial.readString();
   }

  if(a[0] == 'F')
  {
    Serial.println("PAY 50");
    while(!Serial.available())
    {
      delay(1);
    }
    cash = Serial.parseInt();
    if(cash > 50)
    Serial.println(cash - 50);
  }

  if(a[0] == 'T')
  {
    Serial.println("PAY 30");
    while(!Serial.available())
    {
      delay(1);
    }
    cash = Serial.parseInt();
    if(cash > 30)
    Serial.println(cash - 30);
  }
  delay(1000); 
  }
  
 
  
 

  

}
