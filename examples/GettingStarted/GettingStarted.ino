void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT);
  pinMode(2,INPUT_PULLUP);

  

  Serial.begin(115200);
}

int previousValue = HIGH;

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(2) != previousValue){
    
      if( digitalRead(2) == LOW){
         digitalWrite(13,HIGH);
         Serial.println("BOOP");
      }else{
        digitalWrite(13,LOW);
      }

  }

    previousValue = digitalRead(2);
  
}
