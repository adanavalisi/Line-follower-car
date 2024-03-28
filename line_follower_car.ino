#define LS 4
#define CS 5
#define RS 6
#define RM1 7
#define RM2 8
#define ER 9
#define LM1 12
#define LM2 13
#define EL 3

void setup() {
  pinMode(LS, INPUT);
  pinMode(RS, INPUT);
  pinMode(CS, INPUT);
  pinMode(RM1, OUTPUT);
  pinMode(RM2, OUTPUT);
  pinMode(ER, OUTPUT);
  pinMode(LM1, OUTPUT);
  pinMode(LM2, OUTPUT);
  pinMode(EL, OUTPUT);
}

void loop() {
  if(digitalRead(LS) == 0 && digitalRead(CS) == 1 && digitalRead(RS) == 0){
    forward();
  }
  
  if(digitalRead(LS) == 1 && digitalRead(CS) == 0 && digitalRead(RS) == 0){
    left();
  }
  
  if(digitalRead(LS) == 1 && digitalRead(CS) == 1 && digitalRead(RS) == 0){
    left2();
  }
  
  if(digitalRead(LS) == 0 && digitalRead(CS) == 1 && digitalRead(RS) == 1){
    right2();
  }
  
  if(digitalRead(LS) == 0 && digitalRead(CS) == 0 && digitalRead(RS) == 1){
    right();
  }
}
void forward ()
{
  digitalWrite(RM1,HIGH);
  digitalWrite(RM2,LOW);
  analogWrite(ER, 85);
  digitalWrite(LM1,HIGH);
  digitalWrite(LM2,LOW);
  analogWrite(EL, 85);
}
void right ()
{
  digitalWrite(RM1,HIGH);
  digitalWrite(RM2,LOW);
  analogWrite(ER, 50);
  digitalWrite(LM1,HIGH);
  digitalWrite(LM2,LOW);
  analogWrite(EL, 110);
}
void right2 ()
{
  digitalWrite(RM1,HIGH);
  digitalWrite(RM2,LOW);
  analogWrite(ER, 70);
  digitalWrite(LM1,HIGH);
  digitalWrite(LM2,LOW);
  analogWrite(EL, 110);
}
void left ()
{
  digitalWrite(RM1,HIGH);
  digitalWrite(RM2,LOW);
  analogWrite(ER, 110);
  digitalWrite(LM1,HIGH);
  digitalWrite(LM2,LOW);
  analogWrite(EL, 50);
}
void left2 ()
{
  digitalWrite(RM1,HIGH);
  digitalWrite(RM2,LOW);
  analogWrite(ER, 110);
  digitalWrite(LM1,HIGH);
  digitalWrite(LM2,LOW);
  analogWrite(EL, 70);
}
void stopp ()
{
  digitalWrite(RM1,LOW);
  digitalWrite(RM2,LOW);
  analogWrite(ER, 0);
  digitalWrite(LM1,LOW);
  digitalWrite(LM2,LOW);
  analogWrite(EL, 0);
}
