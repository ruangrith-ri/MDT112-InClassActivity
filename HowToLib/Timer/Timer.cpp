#include "Timer.h"

Timer::Timer() {}

Timer Timer::setStartToRunFunction(void (*callBack)(void)) {
  startToRunFunction = callBack;
  return *this;
}

Timer Timer::setRunTimeFunction(void (*callBack)(void)) {
  runTimeFunction = callBack;
  return *this;
}

Timer Timer::setEndToRunFunction(void (*callBack)(void)) {
  endToRunFunction = callBack;
  return *this;
}

Timer Timer::startCountdown(long countdownTime, long currentTime) {
  startTime = currentTime;
  endTime = currentTime + countdownTime;

  startToRunFunction != nullptr ? startToRunFunction() : void();
  return *this;
}

Timer Timer::runner(long _currentTime) {
  long currentTime = _currentTime;

  if (currentTime > endTime) {
    endToRunFunction != nullptr ? endToRunFunction() : void();
  } else if (currentTime >= startTime && currentTime <= endTime) {
    long diffTime = endTime - currentTime;

    second = (diffTime / 1000) % 60;
    minute = (diffTime / 1000) / 60 % 60;
    hour = (diffTime / 1000) / 3600;

    runTimeFunction != nullptr ? runTimeFunction() : void();
  }
  return *this;
}

int Timer::getSecond() { return second; }
int Timer::getMinute() { return minute; }
int Timer::getHour() { return hour; }

String Timer::printCountdownClock() {
  return "Countdown " + String(hour) + ":" + String(minute) + ":" +
         String(second);
}
