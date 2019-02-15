#include<iostream>
#include<conio.h>

using namespace std;

class Complex
{
	int real;
	int img;

public:
	Complex()
	{
		real = img = 0;
	}
	Complex(int i)
	{
		real = img = i;
	}
	Complex(int i, int j)
	{
		real = i;
		img = j;
	}
	friend Complex add_two_complex(Complex, Complex);
	friend Complex multiply_two_complex(Complex, Complex);
};

Complex add_two_complex(Complex c1,Complex c2)
{
	Complex temp;
	temp.real = c1.real + c2.real;
	temp.img = c1.img + c2.img;
	cout << "SUM=" << temp.real << "+i" << temp.img<<endl;
	return temp;
}

Complex multiply_two_complex(Complex c1, Complex c2)
{
	Complex temp;
	temp.real = c1.real * c2.real;
	temp.img = c1.img * c2.img;
	cout << "PRODUCT=" << temp.real << "+i" << temp.img << endl;
	return temp;
}


int main()
{
	Complex c1(2, 3), c2(4, 5), add, mul;
	add = add_two_complex(c1,c2);
	mul = multiply_two_complex(c1, c2);
	_getch();
	return 0;
}