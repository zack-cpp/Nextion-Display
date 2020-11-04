#include <myNextion.h>
NextionComponent t0("t0"); // your text obj name
void setup() {
  Serial.begin(9600); // Nextion display runs on 9600 baud rate
}

void loop() {
  String text;
  t0.setText("hello world");
  delay(1000);
  text = t0.getText();
  Serial.println(text);
  delay(1000);
}
