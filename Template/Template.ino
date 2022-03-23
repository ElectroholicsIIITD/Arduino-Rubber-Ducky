#include <HIDKeyboard.h>  // Header file from the installed library

HIDKeyboard keyboard;     // Declare keyboard object

void setup() {
  keyboard.begin();       // Start communication
  delay(5000);            // Wait while device gets detected as a keyboard

  // Insert Arduino code corresponding to your Ducky Script here

}

// Leave empty
void loop() {}
