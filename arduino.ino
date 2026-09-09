int led = 13;
int ldr = A0;
int sensor;
void setup()
{
  pinMode(led, OUTPUT);
  pinMode(ldr, INPUT);
  
}

void loop()
{
  sensor = analogRead(ldr);
  
  if(sensor > 1000){
  digitalWrite(led, HIGH);
  delay(1000);
  }else{
  digitalWrite(led, LOW);
  delay(1000); 
  }
}
