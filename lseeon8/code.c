const int TrigPin = 2; //发出超声波
const int EchoPin = 3; //收到反射回来的超声波
float cm; //因为测得的距离是浮点型的
void setup() 
{ 
	Serial.begin(9600); //设置波特率
	pinMode(TrigPin, OUTPUT); 
	pinMode(EchoPin, INPUT); 
} 
void loop() 
{ 
	digitalWrite(TrigPin, LOW); //低高低电平发一个短时间脉冲去TrigPin 
	delayMicroseconds(2);       //?delayMicroseconds在更小的时间内延时准确
	digitalWrite(TrigPin, HIGH); 
	delayMicroseconds(10); 
	digitalWrite(TrigPin, LOW); //通过这里控制超声波的发射
	
	cm = pulseIn(EchoPin, HIGH) / 58.0; //将回波时间换算成cm 
	cm = (int(cm * 100.0)) / 100.0; //保留两位小数 
	Serial.print("Distance:"); 
	Serial.print(cm); 
	Serial.print("cm"); 
	Serial.println(); 
	delay(1000); 
}

