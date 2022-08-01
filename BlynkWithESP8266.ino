#define BLYNK_PRINT Serial
#define BLYNK_TEMPLATE_ID "TMPLuT******"
#define BLYNK_DEVICE_NAME "tesp82662"
#include <BlynkSimpleEsp8266.h>
char auth[] = "*********3FHKvCFAqRYW**********";
void setup()
{
  Serial.begin(115200);
  Blynk.begin(auth, "ssid", "password");
  delay(1);
}
void loop(){
  Blynk.run();
}
