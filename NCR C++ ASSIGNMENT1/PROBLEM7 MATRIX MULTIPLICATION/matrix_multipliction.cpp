#include <iostream>
#include<conio.h>

using namespace std;

class Matrix
{
	int a[10][10], v[10], ans[10] = { 0 }, m, n;
public:
	Matrix(int m, int n)
	{
		this->m = m;
		this->n = n;
		cout << "Enter Matrix " << m * n << " ELEMENTS\n" << endl;
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cin >> a[i][j];
			}
		}
		cout << "Enter a Vector " << n << " elements" << endl;
		for (int i = 0; i < n; i++)
		{
			cin >> v[i];
		}
	}
	friend void Multiply(Matrix);
};

void Multiply(Matrix ob)
{
	cout << "After Multiplication" << endl;
	for (int i = 0; i < ob.m; i++)
	{
		for (int j = 0; j < ob.n; j++)
		{
			ob.ans[i] += ob.a[i][j] * ob.v[j];
		}
		cout << ob.ans[i] << endl;
	}
}

int main()
{
	int m, n;
	cout << "Enter row-size of matrix: ";
	cin >> m;
	cout << "Enter column-size of matrix: ";
	cin >> n;
	Matrix ob(m, n);
	Multiply(ob);
	_getch();
	return 0;
}
