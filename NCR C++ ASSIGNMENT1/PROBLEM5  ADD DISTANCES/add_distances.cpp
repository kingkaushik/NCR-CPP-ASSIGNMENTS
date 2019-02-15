#include<iostream>
#include<conio.h>

using namespace std;
class Distance2;
class Distance1
{
	double meter;
	double centimeter;
public:
	Distance1()
	{
		meter = centimeter = 0;
	}
	Distance1(double m, double cm)
	{
		meter = m;
		centimeter = cm;
	}
	void display()
	{
		cout << "Distance: " << meter << " m and " << centimeter << " cm." << endl;
	}
	void set(double a, double b)
	{
		meter = a; centimeter = b;
	}
	double getmeter()
	{
		return meter;
	}
	double getcm()
	{
		return centimeter;
	}	
	friend Distance1 add_distances(Distance1, Distance2);
};
class Distance2
{
	double feet;
	double inch;
public:
	Distance2(double f, double i)
	{
		feet = f;
		inch = i;
	}
	friend Distance1 add_distances(Distance1, Distance2);
};

Distance1 add_distances(Distance1 d1, Distance2 d2)
{
	Distance1 d3;
	d3.set(d1.getmeter()+d2.feet*0.3, d1.getcm()+d2.inch*0.25);
	return d3;
}

int main()
{
	int m, cm, f, i;
	cout << "ENTER meters:";
	cin >> m;
	cout << "ENTER centimeters:";
	cin >> cm;
	cout << "ENTER feet:";
	cin >> f;
	cout << "ENTER inches:";
	cin >> i;
	Distance1 d1(m, cm);
	Distance2 d2(f, i);
	Distance1 d3 = add_distances(d1, d2);
	d3.display();
	_getch();
	return 0;
}