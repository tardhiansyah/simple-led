#include "LED.h"

LED::LED(byte pin)
{
  this->_pin = pin;
  this->_state = false;
  this->_interval = 1000;
  pinMode(this->_pin, OUTPUT);
}

void LED::setBlinkInterval(uint32_t interval)
{
  this->_interval = interval;
}

void LED::blink()
{
  static uint32_t _lastMillis;
  if (millis() - _lastMillis > this->_interval)
  {
    _lastMillis = millis();
    this->_state = !this->_state;
    digitalWrite(this->_pin, this->_state);
  }
}

void LED::on()
{
  this->_state = true;
  digitalWrite(this->_pin, this->_state);
}

void LED::off()
{
  this->_state = false;
  digitalWrite(_pin, this->_state);
}