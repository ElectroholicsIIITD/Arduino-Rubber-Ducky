#include <HIDKeyboard.h>

HIDKeyboard keyboard;

void setup() {
  keyboard.begin();
  delay(6000);
  
  keyboard.pressKey(GUI, 'r');
  keyboard.releaseKey();
  
  delay(2000);
  
  keyboard.println("notepad");
  keyboard.pressSpecialKey(ENTER);
  keyboard.releaseKey();

  delay(3000);

  keyboard.println("Hello World");
  keyboard.println("I am in!");
}

void loop() {}
