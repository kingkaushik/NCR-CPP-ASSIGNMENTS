#include<iostream>
#include<conio.h>

using namespace std;

void swap(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
}

void swap(float &c, float &d)
{
	float temp = c;
	c = d;
	d = temp;
}

int main()
{
	int a = 3, b = 4;
	float c = 3.2f, d = 6.7f;
	cout << "VALUES BEFORE SWAPPING BY CALL BY VALUE: " << a << " " << b << endl;
	swap(a, b);
	cout << "VALUES AFTER SWAPPING BY CALL BY VALUE: " << a << " " << b << endl;
	cout << "VALUES BEFORE SWAPPING BY CALL BY REFERNCE: " << c << " " << d << endl;
	swap(c, d);
	cout << "VALUES AFTER SWAPPING BY CALL BY REFERNCE: " << c << " " << d << endl;
	_getch();
	return 0;
}