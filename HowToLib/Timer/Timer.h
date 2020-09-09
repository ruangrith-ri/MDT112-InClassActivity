#ifndef _Timer_h
#define _Timer_h

#if defined(ARDUINO) && ARDUINO >= 100
#include "arduino.h"
#endif

class Timer {

private:
  long startTime;
  long endTime;

  int second;
  int minute;
  int hour;

protected:
  void (*startToRunFunction)(void);
  void (*runTimeFunction)(void);
  void (*endToRunFunction)(void);

public:
  Timer();

  Timer setStartToRunFunction(void (*callBack)(void));
  Timer setRunTimeFunction(void (*callBack)(void));
  Timer setEndToRunFunction(void (*callBack)(void));

  Timer startCountdown(long countdownTime, long currentTime);
  Timer runner(long _currentTime);

  int getSecond();
  int getMinute();
  int getHour();

  String printCountdownClock();
};

extern Timer timer;

#endif
