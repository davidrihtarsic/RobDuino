/*
 * RobDuinoPinout.h
 *
 *  Created on: 16. feb. 2017
 *      Author: david
 */

#ifndef ROBDUINO_H_
#define ROBDUINO_H_

// 0..7
//extern int D[8];

#define pD0 0
#define pD1 1
#define pD2 2
#define pD3 3
#define pD4 4
#define pD5 5
#define pD6 6
#define pD7 7

// 8..13
//extern int B[6];
#define pB0 8
#define pB1 9
#define pB2 10
#define pB3 11
#define pB4 12
#define pB5 13

// 14..19
//extern int C[6];

#define pC0 14
#define pC1 15
#define pC2 16
#define pC3 17
#define pC4 18
#define pC5 19

void initRobDuino(void) __attribute__((constructor));
class Button{
public:
	Button(char pin);
	Button(char pin, bool pull_up);
	Button(char pin, bool pull_up, char debounce_time_ms);
	bool down();
	bool up();
	bool on();
	bool off();
	bool wasPressed();
private:
	char _pin;
	bool _pull_up;
	char _debounce_time_ms;
};

class UltraSonic {
public:
	UltraSonic(char trigerPin, char echoPin);
	int distanceRead();
private:
	char _trigerPin;
	char _echoPin;
};

#define NAPREJ 1
#define NAZAJ 2
#define STOP 0
#define GOR 1
#define DOL 2

class DOutDir {
public:
	DOutDir(char firstPin, char secondPin);
	void stop();
	void run(char direction);
	void run(char direction, char power);
private:
	char _firstPin;
	char _secondPin;
	char _power;
	char _direction;
};

#endif /* ROBDUINO_H_ */
