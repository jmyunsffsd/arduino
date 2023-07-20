int echo_pin=10;//초음파센서 echo pin을 10번
int trig_pin=11;//초음파센서 trig pin을11번
void setup()
{Serial.begin(9600);
pinMode(echo_pin,INPUT);//수신을 하기 때문에 INPUT으로 설정
  pinMode(trig_pin, OUTPUT);//송신을 하기 때문에 OUTPUT으로 설정
}
void loop() {
  float duration, distance;
  digitalWrite(trig_pin, HIGH);//high
  delay(10);//trig핀이 10동안 발사됨
  digitalWrite(trig_pin, LOW);//low
  duration=pulseIn(echo_pin,HIGH);//duration 값을 가지고 옴
 //plush 함수는 plush(핀번호, 핀상태)의 형태로 이루어져 있으며 핀 상태가바뀌면
 //그때까지 경과한 시간을 ms(마이크로 세컨드)단위로 변환시켜줍니다.
 //단위는 마이크로 초입니다. d의 속도는 초당 340미터를 이동하거나, 29미이크로초당 1센치를 이동합니다 duration=pulsenIn(echo_pin,HIGH)
//초음파
//초음파 센서에서는 echo핀이 HIGH였다고 초음파를 받으면서 LOW로 바뀌기때문에 
//plush함수를 이용해서 초음파가 날아온 시간은 측정할 수 있습니다.
//high였을때 시간(초음파가 보냈다 다시 들어온 시간)을 가지고 거리를 계산

distance=(float(duration/2)/29.1);//나누기를 하는 이유는 왕복을하기 때문이다.
Serial.println( distance);//시리얼로 포트를 열어서 거리를 확인한다. 
Serial.println("mm");//cm로 하고 싶으면 '/100'을 해주면 된다.
delay(3);
}
