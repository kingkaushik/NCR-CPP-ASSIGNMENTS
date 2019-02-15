#include<iostream>
#include<conio.h>

using namespace std;

inline int add(int i,int j)
{
	return i + j;
}

inline int sub(int i, int j)
{
	return i - j;
}


inline int mul(int i, int j)
{
	return i * j;
}

inline int division(int i, int j)
{
	return i / j;
}

inline int mod(int i, int j)
{
	return i % j;
}

int main()
{
	int a = 6, b = 2;
	cout << "SUM = " << add(a, b) << endl;
	cout << "DIFFERENCE = " << sub(a, b) << endl;
	cout << "PRODUCT = " << mul(a, b) << endl;
	cout << "QUOTIENT = " << division(a, b) << endl;
	cout << "REMAINDER = " << mod(a, b) << endl;
	_getch();
	return 0;
}
