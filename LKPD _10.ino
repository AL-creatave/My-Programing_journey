//@pak gurud9
// XI TAV 2
const int buttonPin = 26;
void setup() {
   pinMode(buttonPin, INPUT)
   serial.begin(9600);
}
void loop() {
   int buttonState = digitalRead(buttonPin);
   Serial.print("tombol ditekan: ");
   if (buttonState == HIGH) {
     serial.println("YA");
   }else {
     serial.println("TIDAK");
   delay(100);
}
}
