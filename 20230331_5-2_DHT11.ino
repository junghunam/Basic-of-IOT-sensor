#include <DHT11.h>
int pin = A1;
DHT11 dht11(pin);

void setup() {
  Serial.begin(9600);
}

void loop() {
  int i;
  float humi, temp;
  if((i = dht11.read(humi, temp)) == 0) {
    Serial.print("humidity:");
    Serial.println(humi);
    Serial.print("temperature:");
    Serial.println(temp);
  }
  else{
    Serial.print("Error:");
    Serial.print(i);    
  }
  delay(1000);
}