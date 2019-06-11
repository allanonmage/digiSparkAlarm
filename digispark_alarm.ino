void setup(){
  pinMode(1,INPUT); //detects circuit
  pinMode(4,OUTPUT); // LED for alarm
  pinMode(5,OUTPUT); // siren
  
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  
  
} // end setup()



void loop(){
  
  if(digitalRead(1)==LOW){
    digitalWrite(4,HIGH);
    digitalWrite(5,HIGH);
  } // end if
  
  if(digitalRead(1)==HIGH){
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
  } // end if
  
} // end loop()
