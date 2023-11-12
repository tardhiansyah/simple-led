#ifndef LED_ARDUINO_H
#define LED_ARDUINO_H

#include <Arduino.h>

class LED
{
  public:
    LED(byte pin);

    // Set the LED Blink speed to desired value
    void setBlinkInterval(uint32_t interval);

    // Blink the LED
    void blink();

    // Turn the LED on
    void on();

    // Turn the LED off
    void off();

  private:
    byte _pin;
    uint32_t _interval;
    bool _state;
};

#endif