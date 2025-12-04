#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

// Pin definitions
const int knobPin = A0;     // Speed control knob
const int pwmPin = 9;       // Fan PWM control
const int rpmPin = 2;       // Fan RPM signal (interrupt)

// Variables for RPM measurement
volatile unsigned long pulseCount = 0;
unsigned long lastRPMTime = 0;
int currentRPM = 0;

// Interrupt handler for RPM
void rpmISR() {
  pulseCount++;
}

void setup() {
  pinMode(knobPin, INPUT);
  pinMode(pwmPin, OUTPUT);
  pinMode(rpmPin, INPUT_PULLUP);

  // Attach interrupt to RPM pin
  attachInterrupt(digitalPinToInterrupt(rpmPin), rpmISR, FALLING);

  // Setup OLED
  if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    for (;;);  // hang if display not found
  }
  display.clearDisplay();
  display.setTextColor(WHITE);
  display.setTextSize(1);

  // Set PWM frequency for pin 9 → Fast PWM (~31kHz ideal for PC fans)
  TCCR1B = (TCCR1B & 0b11111000) | 0x01; 
}

void loop() {
  // Read knob value
  int knobValue = analogRead(knobPin);
  int pwmValue = map(knobValue, 0, 1023, 0, 255);

  // Send PWM to fan
  analogWrite(pwmPin, pwmValue);

  // Update RPM every 1 second
  if (millis() - lastRPMTime >= 1000) {
    noInterrupts();
    unsigned long pulses = pulseCount;
    pulseCount = 0;
    interrupts();

    currentRPM = pulses * 30;  // 2 pulses/rev → *30 for RPM

    lastRPMTime = millis();
  }

  // OLED Display
  display.clearDisplay();
  display.setCursor(0, 0);
  display.println("FUME EXTRACTOR");
  display.println("--------------------");

  display.print("PWM: ");
  display.print(map(pwmValue, 0, 255, 0, 100));
  display.println("%");

  display.print("RPM: ");
  display.println(currentRPM);

  display.display();

  delay(50);
}
