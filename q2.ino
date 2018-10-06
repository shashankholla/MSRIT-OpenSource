 int a[16]={0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1};
 int b[16]={0,0,0,0,1,1,1,1,0,0,0,0,1,1,1,1};
 int c[16]={0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1};
 int d[16]={0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1};
void setup() {

  pinMode(13,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(10,OUTPUT);
}
int i = 0;
void loop() {

    
    digitalWrite(10,a[(i)%16]);
    digitalWrite(11,b[(i)%16]);
    digitalWrite(13,c[(i)%16]);
    digitalWrite(12,d[(i++)%16]);
    delay(1000);
  
}
