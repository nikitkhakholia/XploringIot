int IR=17, R1=21,R2=20,R3=19,R4=18;

void setup() {
  // put your setup code here, to run once:
  //int IR=17, R1=21,R2=20,R3=19,R4=18;
  pinMode(IR, INPUT);
  pinMode(R1, OUTPUT);
  pinMode(R2, OUTPUT);
  pinMode(R3, OUTPUT);
  pinMode(R4, OUTPUT);
}
void loop() {
  // int IR=17, R1=21,R2=20,R3=19,R4=18;
  // put your main code here, to run repeatedly:
  if(digitalRead(IR)){
    digitalWrite(R1, HIGH);
    digitalWrite(R2, HIGH);
    digitalWrite(R3, HIGH);
    digitalWrite(R4, HIGH);
  }else{
    digitalWrite(R1, LOW);
    digitalWrite(R2, LOW);
    digitalWrite(R3, LOW);
    digitalWrite(R4, LOW);
  }
}
