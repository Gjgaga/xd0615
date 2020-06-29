const int TrigPin = 2; //����������
const int EchoPin = 3; //�յ���������ĳ�����
float cm; //��Ϊ��õľ����Ǹ����͵�
void setup() 
{ 
	Serial.begin(9600); //���ò�����
	pinMode(TrigPin, OUTPUT); 
	pinMode(EchoPin, INPUT); 
} 
void loop() 
{ 
	digitalWrite(TrigPin, LOW); //�͸ߵ͵�ƽ��һ����ʱ������ȥTrigPin 
	delayMicroseconds(2);       //?delayMicroseconds�ڸ�С��ʱ������ʱ׼ȷ
	digitalWrite(TrigPin, HIGH); 
	delayMicroseconds(10); 
	digitalWrite(TrigPin, LOW); //ͨ��������Ƴ������ķ���
	
	cm = pulseIn(EchoPin, HIGH) / 58.0; //���ز�ʱ�任���cm 
	cm = (int(cm * 100.0)) / 100.0; //������λС�� 
	Serial.print("Distance:"); 
	Serial.print(cm); 
	Serial.print("cm"); 
	Serial.println(); 
	delay(1000); 
}

