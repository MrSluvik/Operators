#include "Time.h"
#include <iostream>
Time::Time() {
	hour = 0;
	minuts = 0;
	seconds = 0;
}


Time::~Time() {

}

std::ostream& operator<<(std::ostream& os, Time& t) {//перевантаження оператора >>
	os << " hour: " << t.hour << " minuts: " << t.minuts << " seconds: " << t.seconds;
	return os;
}


std::istream& operator>>(std::istream& in, Time& t) {//перевантаження оператора <<
	std::cout << "hour, minuts, seconds : " << std::endl;
	in >> t.hour >> t.minuts >> t.seconds;
	return in;
}


Time::Time(int h, int m, int s) {
	this->hour = h;
	this->minuts = m;
	this->seconds = s;
}


bool Time::operator >(const Time& other) {//перевантаження оператора >
	if (this->hour > other.hour) { return true; }
	else if (this->minuts > other.minuts) { return true; }
	else if (this->seconds > other.seconds) { return true; }
	else { return false; }
}


bool Time::operator <(const Time& other) {//перевантаження оператора <
	if (this->hour < other.hour) { return true; }
	else if (this->minuts < other.minuts) { return true; }
	else if (this->seconds < other.seconds) { return true; }
	else { return false; }
}

bool Time::operator >=(const Time& other) {//перевантаження оператора >=
	if (this->hour >= other.hour) { return true; }
	else if (this->minuts >= other.minuts) { return true; }
	else if (this->seconds >= other.seconds) { return true; }
	else { return false; }
}


bool Time::operator <=(const Time& other) {//перевантаження оператора <=
	if (this->hour <= other.hour) { return true; }
	else if (this->minuts <= other.minuts) { return true; }
	else if (this->seconds <= other.seconds) { return true; }
	else { return false; }
}


bool Time::operator ==(const Time& other) {//перевантаження оператора ==
	if (this->hour == other.hour) { return true; }
	else if (this->minuts == other.minuts) { return true; }
	else if (this->seconds == other.seconds) { return true; }
	else { return false; }
}


bool Time::operator !=(const Time& other) {//перевантаження оператора !=
	if (this->hour != other.hour) { return true; }
	else if (this->minuts != other.minuts) { return true; }
	else if (this->seconds != other.seconds) { return true; }
	else { return false; }
}


Time& Time:: operator ++ () {//перевантаження оператора  префіксного інкременту 
	this->hour++;
	this->minuts++;
	this->seconds++;
	return *this;

}


Time& Time:: operator -- () {//перевантаження оператора префіксного декременту
	this->hour--;
	this->minuts--;
	this->seconds--;
	return *this;

}


Time& Time:: operator ++ (int value) {//перевантаження оператора постфіксного  інкременту 
	Time temp(*this);
	this->hour++;
	this->minuts++;
	this->seconds++;
	return temp;
}


Time& Time:: operator -- (int value) {//перевантаження оператора постфіксного  декременту
	Time temp(*this);
	this->hour--;
	this->minuts--;
	this->seconds--;
	return temp;
}


Time& Time::operator += (const Time& other) {//перевантаження оператора +=
	
	this->hour += other.hour;
	this->minuts += other.minuts;
	this->seconds += other.seconds;
	return *this;
}


Time& Time::operator -=(const Time& other) {//перевантаження оператора -=

	this->hour -= other.hour;
	this->minuts -= other.minuts;
	this->seconds -= other.seconds;
	return *this;
}
