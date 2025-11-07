
int red = 6;
int green = 5;
int ontime = 1000;
int offtime = 500;
int knapp = 9;
void setup() {
  // put your setup code here, to run once:
pinMode(green,OUTPUT);
pinMode(red,OUTPUT);
pinMode(knapp, INPUT_PULLUP);
digitalWrite(green, LOW);
digitalWrite(red, LOW);

}

void loop() {
  // put your main code here, to run repeatedly:

if(digitalRead(knapp)==0) {
  digitalWrite(green,LOW);
digitalWrite(red,HIGH);
} else{
digitalWrite(red,LOW);
digitalWrite(green,HIGH);
}
}
