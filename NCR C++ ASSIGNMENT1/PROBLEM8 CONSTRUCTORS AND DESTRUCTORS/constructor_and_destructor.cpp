#include<iostream>
#include<conio.h>

using namespace std;

class Employee
{
	int empid;
	float salary;
public:
	Employee()
	{
		salary = empid = 0;
		cout << "EMPLOYEE DEFAULT CONSTRUCTOR"<<endl;
	}
	Employee(int eid, float esal)
	{
		empid = eid;
		salary = esal;
		cout << "EMPLOYEE PARAMETERISED CONSTRUCTOR" << endl;
		cout << "EMPLOYEE ID :" << eid << "  SALARY : " << esal<<endl;
	}
	~Employee()
	{
		cout << "DESTRUCTOR INVOKED" << endl;
		system("pause");
	}
	void set_id(int eid)
	{
		cout << "CALL BY VALUE" << endl;
		empid = eid;
	}
	void set_sal(float &sal)
	{
		cout << "CALL BY REFERENCE" << endl;
		salary = sal;
	}
};

int main()
{
	Employee e1, e2(1, 1000.23f);
	e1.set_id(2);
	float sal = 2000.12f;
	e2.set_sal(sal);
	return 0;
}