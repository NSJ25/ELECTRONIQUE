#include <TM1637Display.h>

// === Pins ===
#define CLK 2
#define DIO 3
#define IR_SENSOR 4
#define RESET_BUTTON 5
#define TOGGLE_BUTTON 6
#define LED_RED 7
#define LED_GREEN 8

TM1637Display display(CLK, DIO);

// === Variables ===
volatile int count = 0;
bool detectionActive = true;
bool lastIRState = HIGH;
unsigned long lastDebounceTime = 0;
const unsigned long debounceDelay = 50;

void setup() {
  pinMode(IR_SENSOR, INPUT);
  pinMode(RESET_BUTTON, INPUT_PULLUP);
  pinMode(TOGGLE_BUTTON, INPUT_PULLUP);
  pinMode(LED_RED, OUTPUT);
  pinMode(LED_GREEN, OUTPUT);
  
  display.setBrightness(5);
  display.showNumberDec(0);

  updateLED();
}

void loop() {
  // === Bouton reset ===
  if (digitalRead(RESET_BUTTON) == LOW) {
    delay(200); // anti-rebond simple
    count = 0;
    display.showNumberDec(count);
  }

  // === Bouton ON/OFF détection ===
  static bool lastToggleState = HIGH;
  bool toggleState = digitalRead(TOGGLE_BUTTON);
  if (toggleState == LOW && lastToggleState == HIGH) {
    detectionActive = !detectionActive;
    updateLED();
    delay(200); // anti-rebond
  }
  lastToggleState = toggleState;

  // === Lecture capteur IR ===
  if (detectionActive) {
    bool irState = digitalRead(IR_SENSOR);
    if (irState == LOW && lastIRState == HIGH) {
      count++;
      display.showNumberDec(count);
      delay(300); // anti-doublons
    }
    lastIRState = irState;
  }
}

void updateLED() {
  digitalWrite(LED_GREEN, detectionActive ? HIGH : LOW);
  digitalWrite(LED_RED, detectionActive ? LOW : HIGH);
}
