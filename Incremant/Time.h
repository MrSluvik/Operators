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
	~Time(void);//���������
	friend std::istream& operator>>(std::istream&, Time& t);//�������������� ��������� >>
	friend std::ostream& operator<<(std::ostream&, Time& t);//�������������� ��������� <<
	bool operator >(const Time& other);//�������������� ��������� >
	bool operator <(const Time& other);//�������������� ��������� <
	bool operator >=(const Time& other);//�������������� ��������� >=
	bool operator <=(const Time& other);//�������������� ��������� <=
	bool operator ==(const Time& other);//�������������� ��������� ==
	bool operator !=(const Time& other);//�������������� ��������� !=
	Time& operator ++ ();//�������������� ���������  ����������� ���������� 
	Time& operator -- ();//�������������� ��������� ����������� ����������
	Time& operator ++ (int);//�������������� ��������� ������������  ���������� 
	Time& operator -- (int);//�������������� ��������� ������������  ����������
	Time& operator += (const Time& other);//�������������� ��������� +=
	Time& operator -=(const Time& other);//�������������� ��������� -=
	
};


