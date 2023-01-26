void setup() {
  // put your setup code here, to run once:
  Serial1.begin(115200);
  Serial1.println("Hello, Raspberry Pi Pico!");
  pinMode(17, OUTPUT);
  pinMode(19, INPUT);
}
void relay_off() {
  digitalWrite(17, LOW);
}

void relay_on() {
  digitalWrite(17, HIGH);
}
void loop() {
//  relay_on();
//  Serial1.println("On");
//  delay(5000);
//  relay_off();
//  Serial1.println("Off");
  int sensor_value = digitalRead(19);   // Read the value of the PIR sensor
  if (sensor_value == HIGH) {               // Check if the PIR sensor has detected motion
    relay_on();           // Turn on the LED
    Serial1.println("Motiaon is not detected relay to ON");
    delay(2000);
  }
  else{
    relay_off();            // Turn off the LED
    Serial1.println("Motiaon is not detected relay to OFF");
    delay(2000);
  }
}
