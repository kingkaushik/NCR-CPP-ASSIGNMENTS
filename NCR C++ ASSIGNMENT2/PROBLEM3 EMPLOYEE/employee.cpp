#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

class Employee
{
	int empno;
	char name[30];
	int salary;
public:
	Employee()
	{
		empno = 0;
		strcpy_s(name, 2, "");
		salary = 0;
	}
	Employee(int empno, char *name, int salary)
	{
		this->empno = empno;
		int name_length = strlen(name);
		strcpy_s(this->name, name_length + 1, name);
		this->salary = salary;
	}
	void set_empno(int empno)
	{
		this->empno = empno;
	}
	int get_empno()
	{
		return empno;
	}
	void set_salary(int salary)
	{
		this->salary = salary;
	}
	int get_salary()
	{
		return salary;
	}
	void set_name(const char* name)
	{
		int name_length = strlen(name);
		strcpy_s(this->name, name_length + 1, name);
	}
	char* get_name()
	{
		int name_length = strlen(this->name);
		char name[30];
		strcpy_s(name, name_length + 1, this->name);
		return name;
	}
	~Employee()
	{
		if (name != NULL)
		{
			delete name;
		}
	}
	friend istream& operator>>(istream&, Employee&);
};

istream& operator>>(istream& cin, Employee& emp)
{
	cout << "ENTER EMPNO : ";
	cin >> emp.empno;
	cout << "\nENTER NAME:";
	cin >> emp.name;
	cout << "\nENTER SALARY:";
	cin >> emp.salary;
	return cin;
}

int main()
{
	Employee *emp;
	emp = new Employee[5];
	cout << "ENTER 5 EMPLOYEE DETAILS";
	for (int i = 0; i < 5; i++)
	{
		cout << "\nENTER EMPLOYEE " << i + 1 << " DETAILS" << endl;
		cin >> emp[i];
	}
	system("pause");
	return 0;
}