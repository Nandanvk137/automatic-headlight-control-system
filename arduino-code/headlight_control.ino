#define LDR_PIN 13 // DO pin from LDR module
#define LED_PIN 23 // LED connected here
void setup() {
 pinMode(LDR_PIN, INPUT);
 pinMode(LED_PIN, OUTPUT);
 digitalWrite(LED_PIN, LOW);
 Serial.begin(115200);
}
void loop() {
 int ldrState = digitalRead(LDR_PIN);
 Serial.print("LDR State: ");
 Serial.println(ldrState);
 if (ldrState == LOW) {
 // DARK → LED ON
 digitalWrite(LED_PIN, 1);
 } else {
 // BRIGHT → LED OFF
 digitalWrite(LED_PIN, 0);
 }
 delay(300);
}
