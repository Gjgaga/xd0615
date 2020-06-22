#define IN1 2
#define IN2 3
#define IN3 4
#define IN4 5

#define S1 8
#define S2 9
#define S3 10
#define S4 11

#define LT 6
#define BT 7
void setup()
{
  pinMode(IN1, OUTPUT);//输入1
  pinMode(IN2, OUTPUT);//输入2
  pinMode(IN3, OUTPUT);//输入3
  pinMode(IN4, OUTPUT);//输入4
  pinMode(S1, OUTPUT);//片�?
  pinMode(S2, OUTPUT);//片�?
  pinMode(S3, OUTPUT);//片�?
  pinMode(S4, OUTPUT);//片�?
  
  pinMode(LT,OUTPUT);//测试
  pinMode(BT,OUTPUT);//消隐
  Serial.begin(9600);
}
bytestring income=0;
void loop()
{
  
  if(Serial.available()>0)
  {
   income=Serial.readString();
    income=income-'0';
    digitalWrite(S1,LOW);
    digitalWrite(2,income&0x1);
    digitalWrite(3,(income>>1)&0x1);
    digitalWrite(4,(income>>2)&0x1);
    digitalWrite(5,(income>>3)&0x1);
    digitalWrite(S1,HIGH)
  	delay(10);
  
   income=Serial.readString();
    income=income-'0';
    digitalWrite(S2,LOW);
    digitalWrite(2,(income>>8)&0x1);
    digitalWrite(3,(income>>9)&0x1);
    digitalWrite(4,(income>>10)&0x1);
    digitalWrite(5,(income>>11&0x1);
    digitalWrite(S2,HIGH)
  	delay(10);
  
   income=Serial.readString();
    income=income-'0';
    digitalWrite(S3,LOW);
    digitalWrite(2,(income>>16)&0x1);
    digitalWrite(3,(income>>17)&0x1);
    digitalWrite(4,(income>>18)&0x1);
    digitalWrite(5,(income>>19)&0x1);
    digitalWrite(S3,HIGH)
  	delay(10);
  
   income=Serial.readString();
    income=income-'0';
   digitalWrite(S4,LOW);
    digitalWrite(2,(income>>24&0x1);
    digitalWrite(3,(income>>25)&0x1);
    digitalWrite(4,(incomef>>26)&0x1);
    digitalWrite(5,(incomef>>27)&0x1);
     digitalWrite(S4,HIGH)
  	delay(10);
  }
}
