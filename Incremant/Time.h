#pragma once
#include <iostream>
typedef unsigned int ui;
class Time
{
private:
	ui hour;
	ui minuts;
	ui seconds;
public:
	Time(void);//0
	Time(int, int, int);
	~Time(void);//деструтор
	friend std::istream& operator>>(std::istream&, Time& t);//перевантаження оператора >>
	friend std::ostream& operator<<(std::ostream&, Time& t);//перевантаження оператора <<
	bool operator >(const Time& other);//перевантаження оператора >
	bool operator <(const Time& other);//перевантаження оператора <
	bool operator >=(const Time& other);//перевантаження оператора >=
	bool operator <=(const Time& other);//перевантаження оператора <=
	bool operator ==(const Time& other);//перевантаження оператора ==
	bool operator !=(const Time& other);//перевантаження оператора !=
	Time& operator ++ ();//перевантаження оператора  префіксного інкременту 
	Time& operator -- ();//перевантаження оператора префіксного декременту
	Time& operator ++ (int);//перевантаження оператора постфіксного  інкременту 
	Time& operator -- (int);//перевантаження оператора постфіксного  декременту
	Time& operator += (const Time& other);//перевантаження оператора +=
	Time& operator -=(const Time& other);//перевантаження оператора -=
	
};


