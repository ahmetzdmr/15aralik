int led1=12;
int led2=9;
int led3=10;
int led4=11;
int led5=7;
void setup() {
  // put your setup code here, to run once:
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
  pinMode(led5,OUTPUT);
}
void loop() {
  // put your main code here, to run repeatedly:
  //1->HIGH  //0->LOW
  //1000->1 sn  //500-> yarım saniye
  ledyak(led1);  
  ledyak(led2);  
  ledyak(led3);  
  ledyak(led4);
  ledyak(led5);
}
void ledyak(int led){
  digitalWrite(led,HIGH);
  delay(500);
  digitalWrite(led,LOW);
  delay(50);
}
