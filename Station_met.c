#define BLYNK_TEMPLATE_ID "TMPLUloTqqNC"
#define BLYNK_DEVICE_NAME "Temperature"
#define BLYNK_AUTH_TOKEN "BQRkYRW02mNwpPRDYG4J7C4XdPYLM-TV"

#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#include <DHT.h>

char auth[] = BLYNK_AUTH_TOKEN;

char ssid[] = "INPT-TEST";  // type your wifi name
char pass[] = "iinnpptt";  // type your wifi password

#define DHTPIN 2          // Mention the digital pin where you connected 
#define DHTTYPE DHT11     // DHT 11  
DHT dht(DHTPIN, DHTTYPE);
BlynkTimer timer;

void sendSensor(){
  float h = dht.readHumidity();
  float t = dht.readTemperature(); // or dht.readTemperature(true) for Fahrenheit
  if (isnan(h) || isnan(t)) {
    Serial.println("Failed to read from DHT sensor!");
    return;
  }

  Serial.println(t);
  Blynk.virtualWrite(V6, h);
  Blynk.virtualWrite(V5, t);
    Serial.print("Temperature : ");
    Serial.print(t);
    Serial.print("    Humidity : ");
    Serial.println(h);


  if(t > 30){
    Blynk.email("yassir2011@gmail.com", "Alert", "Temperature over 28C!");
    Blynk.logEvent("temp_alert","La Temperature est au dela de 30 degree");
  }
}

void setup(){
   Serial.begin(115200);
  Blynk.begin(auth, ssid, pass);
  dht.begin();
  timer.setInterval(2500L, sendSensor);
}

void loop(){
  Blynk.run();
  timer.run();
}
