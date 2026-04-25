void setup() {
  pinMode(9,INPUT);
  pinMode(10,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int status_Ir=digitalRead(9);
  Serial.println(status_Ir);
  delay(5000);
  if(status_Ir==0){
    digitalWrite(10,HIGH);
    Serial.println("person detected led on");
  }
  else{
    digitalWrite(10,LOW);
    Serial.println("person not detected led off");
  }
}

