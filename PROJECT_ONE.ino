
 

int led = 10; // led is connected to digital pin 10
int delayOn = 50; // delay the blinking by 1 second
int delayOff = 50; // delay the blinking by 1 second 
int motorPin = 3;
 
void setup() 
{ 
  pinMode(motorPin, OUTPUT);
  Serial.begin(9600);
  while (! Serial);
  Serial.println("Speed 0 to 255");
} 
 
 
void loop() 
{ 
  if (Serial.available())
  {
    Serial.println("is this workinG");
    int speed = Serial.parseInt();
    if (speed >= 0 && speed <= 255)
    {
      analogWrite(motorPin, speed);
    }
  }
} 
