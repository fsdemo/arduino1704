
unsigned long lastRun = 0;

int pinValue = LOW;

void setup() {
    pinMode(13,OUTPUT);
    Serial.begin(115200);
}

void loop() {

  Serial.print(".");

  if( millis() > lastRun + 500){

    // Toggle the LED.
    if(pinValue == HIGH){
      pinValue = LOW;
    }else{
      pinValue = HIGH;
    }
    digitalWrite(13,pinValue);
    lastRun = millis();
  }

}
