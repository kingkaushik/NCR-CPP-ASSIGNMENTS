#include<iostream>
#include<conio.h>

using namespace std;

class Polar
{
	double radius;
	double angle;

public:
	static int count_objects;
	Polar()
	{
		radius = 0;
		angle = 0;
		count_objects++;
	}
	Polar(double radius, double angle)
	{
		this->radius = radius;
		this->angle = angle;
		count_objects++;
	}
	~Polar()
	{
		count_objects--;
		cout << "NO OF OBJECTS ACTIVE = " << Polar::count_objects << endl;
		system("pause");
	}
};
int Polar::count_objects;

int main()
{
	Polar polar1, polar2(23.5, 22.7);
	cout << "NO OF OBJECTS ACTIVE = " << Polar::count_objects << endl;
	return 0;
}