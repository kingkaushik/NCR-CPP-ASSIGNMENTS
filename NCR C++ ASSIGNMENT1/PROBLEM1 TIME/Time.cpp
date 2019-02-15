#include<iostream>
#include<conio.h>

using namespace std;

class Time
{
	int hours;
	int minutes;
	int seconds;

public:
	Time()
	{
		hours = 0;
		minutes = 0;
		seconds = 0;
	}

	Time(int hours, int minutes, int seconds)
	{
		this->hours = hours;
		this->minutes = minutes;
		this->seconds = seconds;
	}

	void display_time()
	{
		cout << hours << " : " << minutes << " : " << seconds;
	}

	Time  add_time(Time &t1, Time &t2)
	{
		Time t3;
		t3.hours = t1.hours + t2.hours;
		t3.minutes = t1.minutes + t2.minutes;
		t3.seconds = t1.seconds + t2.seconds;
		return t3;
	}

};

int main()
{
	Time t1(12, 10, 10), t2(11, 20, 20), t3;
	t3 = t3.add_time(t1, t2);
	t3.display_time();
	_getch();
	return 0;
}