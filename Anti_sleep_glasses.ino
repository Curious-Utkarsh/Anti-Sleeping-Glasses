int relayPin = 5;
int sensorPin = 4;
int sensorRead=0;

void setup()
{
  Serial.begin(9600);
  pinMode(relayPin,OUTPUT);
  pinMode(sensorPin,INPUT);
  digitalWrite(relayPin,LOW);
}

void loop()
{
  sensorRead=digitalRead(sensorPin);
  Serial.println(sensorRead);

  if(sensorRead==0)
  {
    delay(3000);
    if(digitalRead(sensorPin)==sensorRead)
    {
    digitalWrite(relayPin,HIGH);
    }
  }
  else
  {
    digitalWrite(relayPin,LOW);
  }
}
