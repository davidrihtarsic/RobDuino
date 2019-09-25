/*
 * RobDuino.cpp
 *
 *  Created on: Feb 17, 2017
 *      Author: david
 */
#include "RobDuino.h"
#include "Arduino.h"

// funkcija je deklarirana kot konstruktor in se zgodi v vsakem primeru
void initRobDuino(void){
	DDRC = 0x00;	//PortC as INPUT
	PORTC = 0x30; 	//PullUps on C5 and C4
	DDRD = 0xFF;	//PortD as OUTPUT
}

//object za BUTTON
// konstruktor za button
Button::Button(char pin){
	_pull_up = true;
	_pin = pin;
	_debounce_time_ms = 2;
	if (_pull_up){
		pinMode(pin,INPUT_PULLUP);
	}else{
		pinMode(pin,INPUT);
	}
}
Button::Button(char pin, bool pull_up){
	_pull_up = pull_up;
	_pin = pin;
	_debounce_time_ms = 2;
	if (_pull_up){
		pinMode(pin,INPUT_PULLUP);
	}else{
		pinMode(pin,INPUT);
	}
}
Button::Button(char pin, bool pull_up, char debounce_time_ms){
	_pull_up = pull_up;
	_pin = pin;
	_debounce_time_ms = debounce_time_ms;
	if (_pull_up){
		pinMode(pin,INPUT_PULLUP);
	}else{
		pinMode(pin,INPUT);
	}
}
bool Button::down(){
	if (_pull_up){
		return !digitalRead(_pin);
	}else{
		return digitalRead(_pin);
	}
}

bool Button::up(){
	return !down();
}

bool Button::on(){
	if (_pull_up){
		return !digitalRead(_pin);
	}else{
		return digitalRead(_pin);
	}
}

bool Button::off(){
	return !down();
}

bool Button::wasPressed(){
	if (down()){
		delay(_debounce_time_ms); //
		while (down()){}//èakaj da spusti..
		delay(_debounce_time_ms);
		return true;
	}else{
		return false;
	}
}

UltraSonic::UltraSonic(char trigerPin, char echoPin){
	  _trigerPin = trigerPin;
	  _echoPin = echoPin;
	  pinMode(_trigerPin, OUTPUT);
	  pinMode(_echoPin, INPUT);
}
int UltraSonic::distanceRead(){
	int time_duration = 0;
	digitalWrite(_trigerPin, LOW);
	delayMicroseconds(2);
	digitalWrite(_trigerPin, HIGH);
	delayMicroseconds(10);
	digitalWrite(_trigerPin, LOW);
	time_duration = pulseIn(_echoPin, HIGH); // duration
	return time_duration / 58; //d = 34412cm/s (20°C,101kPa, v=60%) * X[uS] -> 58 = 10^(6) ÷ 34412 * 2
}


DOutDir::DOutDir(char firstPin, char secondPin){
	_firstPin = firstPin;
	_secondPin = secondPin;
	_power = 255;
	_direction = 0;
	pinMode(_firstPin, OUTPUT);
	pinMode(_secondPin, OUTPUT);
}
void DOutDir::run(char direction){
	switch (direction){
	case 0:
		digitalWrite(_firstPin,0);
		digitalWrite(_secondPin,0);
		break;
	case 1:
		digitalWrite(_firstPin,1);
		digitalWrite(_secondPin,0);
		break;
	case 2:
		digitalWrite(_firstPin,0);
		digitalWrite(_secondPin,1);
		break;
	default:
		digitalWrite(_firstPin,0);
		digitalWrite(_secondPin,0);
	}
}
void DOutDir::run(char direction, char power){
	switch (direction){
	case 0:
		digitalWrite(_firstPin,0);
		digitalWrite(_secondPin,0);
		break;
	case 1:
		if (_firstPin==pD3 or _firstPin==pD5 or _firstPin==pD6){
			analogWrite(_firstPin, power);
			digitalWrite(_secondPin,0);
		}else if (_secondPin==pD3 or _secondPin==pD5 or _secondPin==pD6){
			digitalWrite(_firstPin,1);
			analogWrite(_secondPin,255-power);
		}else{
			//tu bi se lahko pogledalo, če je definiran PWMpin in se PWM da na tisti pin...
			digitalWrite(_firstPin,1);
			digitalWrite(_secondPin,0);
		}
		break;
	case 2:
		if (_secondPin==pD3 or _secondPin==pD5 or _secondPin==pD6){
			digitalWrite(_firstPin,0);
			analogWrite(_secondPin,power);
		}else if (_firstPin==pD3 or _firstPin==pD5 or _firstPin==pD6){
			analogWrite(_firstPin, 255-power);
			digitalWrite(_secondPin,1);
		}else{
			//tu bi se lahko pogledalo, če je definiran PWMpin in se PWM da na tisti pin...
			digitalWrite(_firstPin,0);
			digitalWrite(_secondPin,1);
		}
		break;
	default:
		digitalWrite(_firstPin,0);
		digitalWrite(_secondPin,0);
	}
}

void DOutDir::stop(){
	digitalWrite(_firstPin,0);
	digitalWrite(_secondPin,0);
}
