// перегрузіть time++;   перегрузіть time--;   перегрузіть ++time;   перегрузіть --time;   перегрузіть time += time1;   перегрузіть time -= time1;
#include <iostream>
#include <Windows.h>
#include "Time.h"
using namespace std;

int main()
{
	Time time(3, 5, 7);//створюємо об’єкт time
	Time time1(2, 4, 5);// створюємо об’єкт time1
	cout << time << endl; //виводмо значення об’єкт time
	cout << time1 << endl;//виводмо значення об’єкт time1

	bool ans = time > time1;// перевантаження оператора<
	cout << "time > time1 :" << ans << endl;
	bool ans1 = time < time1;// перевантаження оператора >
	cout << "time < time1 :" << ans1 << endl;
	bool ans2 = time >= time1;// перевантаження оператора >= 
	cout << "time >= time1 :" << ans2 << endl;
	bool ans3 = time <= time1;// перевантаження оператора <=
	cout << "time <= time1 :" << ans3 << endl;
	bool ans4 = time == time1;// перевантаження оператора ==
	cout << "time == time1 :" << ans4 << endl;
	bool ans5 = time != time1;// перевантаження оператора !=
	cout << "time != time1 :" << ans5 << endl;

	++time; cout << "time prefiks :" << time << endl;
	--time; cout << "time prefirs :" << time << endl;
	time++; cout << "time postfiks :" << time << endl;
	time--; cout << "time postfiks :" << time << endl;
	time+=time1; cout << "time +=time1 :" << time << endl;
	time-=time1; cout << "time -=time1:" << time << endl;
}
