
const int din = 8 ;
int potin;
int pot;

void setup()
{
Serial.begin(9600);

pinMode(din,OUTPUT) ; 
pinMode(A1, INPUT);
pinMode(11, OUTPUT);
}

void loop()

{
 pot = analogRead(A1);
 Serial.println(pot);
 delay(500);
 if(pot>=0&&pot<512){
  potin = map(pot, 0, 512, 0 , 255);
  analogWrite(11, potin);
  digitalWrite(din,LOW);
 }
  else if(pot>512&&pot<=1023)
  {
     potin = map(pot, 512, 1023 , 0, 255);
     analogWrite(11, potin);
     digitalWrite(din,HIGH);
  }
 }
