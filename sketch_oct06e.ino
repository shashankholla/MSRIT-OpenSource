#define LDR 10


void setup() {
pinMode(LDR,INPUT);
}
String a;
int cash;
void loop() {
  while(!Serial.available())
    {
      delay(1);
    }
     while(Serial.available())
  {
   a = Serial.readString();
   }
  
  if(Serial.read() == 'L')
  {
     
    for(int i = 0; i < strlen(a); i++)
    {
      a[i] = a[i] - 3;
     
    }



    
  }
  else{
    for(int i = 0; i < strlen(a); i++)
    {
      a[i] = a[i] + 3;


      
    }
  }
  
 

  

}
