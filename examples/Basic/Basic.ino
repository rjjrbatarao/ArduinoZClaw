
#include "zclaw_config.h"
#include <zclaw.h>



void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  delay(1000);
  Serial.print("ESP-IDF Function Version: ");
  Serial.println(esp_get_idf_version());
  Serial.println("Ready");
  zclaw_init();
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(1);
}
