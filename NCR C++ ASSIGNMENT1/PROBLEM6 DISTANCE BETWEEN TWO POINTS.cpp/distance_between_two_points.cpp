#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;

class Point
{
	int x;
	int y;
public:
	Point(int x1,int y1)
	{
		x = x1;
		y = y1;
	}
	friend double distance_between_two_points(Point, Point);
};

double distance_between_two_points(Point p1, Point p2)
{
	return sqrt((p1.x - p2.x)*(p1.x - p2.x) + (p1.y - p2.y)*(p1.y - p2.y));
}

int main()
{
	Point p1(2,3), p2(4,5);
	cout << "THE DISTANCE IS " << distance_between_two_points(p1, p2);
	_getch();
	return 0;
}