#define LED1 10;
#define LED1 11;
#define LED1 12;
#define LED1 13;


int counter = 4;

void setup() {
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);

}

void loop() {

  for(counter = 4; counter > -1; counter--)
  {
    if(counter != 0)
    {for(int i = 10; i < 14; i++)
    {
      digitalWrite(i,HIGH);
      delay(500 );
      digitalWrite(i,LOW);
      delay(1000*counter);
    }}
    else{
      for(int i = 10; i < 14; i++)
    {
      digitalWrite(i,HIGH);           
    }
    delay(1000);
    for(int i = 10; i < 14; i++)
    {
      digitalWrite(i,LOW);           
    }
      
    }
  }
  
  
  
  

}
