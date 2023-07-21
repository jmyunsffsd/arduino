int redPin=3;
int greanPin=5;
int bluePin=9;
// the setup function runs once when you press reset or power the board
void setup() {
   pinMode(redPin, OUTPUT);
 pinMode(greanPin, OUTPUT);
 pinMode(bluePin, OUTPUT);
}

void loop() {
  setColor(255,0,0);delay(1000);//red
   setColor(0,255,0);delay(1000);//grean
   setColor(0,0,255);delay(1000);//blue
}
void setColor(int red, int grean,int blue)
{analogWrite(redPin, red);
 analogWrite(greanPin,grean);
 analogWrite(bluePin,blue);}
