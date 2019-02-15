#include<iostream>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

using namespace std;

class Student
{
	int rollno;
	char name[30];
	int marks_of_subjects[3];
	int total_marks;
	char grade[2];
public:
	friend istream& operator>>(istream&, Student&);
	friend ostream& operator<<(ostream&, Student);
	friend void generate_result(Student*, int);
};

void generate_result(Student* student, int n)
{
	for (int i = 0; i < n; i++)
	{
		
		student[i].total_marks = student[i].marks_of_subjects[0] + student[i].marks_of_subjects[1] + student[i].marks_of_subjects[2];
		
		if (student[i].total_marks < 40)
		{
			student[i].grade[0] = 'F';
		}
		else if (student[i].total_marks >= 40 && student[i].total_marks < 60)
		{
			student[i].grade[0] = 'C';
		}
		else if (student[i].total_marks >= 60 && student[i].total_marks < 75)
		{
			student[i].grade[0] = 'B';
		}
		else
		{
			student[i].grade[0] = 'A';
		}
		student[i].grade[1] = '\0';
	}
}

istream& operator>>(istream& cin, Student &student)
{
	cout << "ENTER ROLL NO:";
	cin >> student.rollno;
	cout << endl << "ENTER NAME:";
	cin >> student.name;
	for (int i = 0; i < 3; i++)
	{
		cout << "ENTER SUBJECT"<<(i+1)<<" MARKS:";
		cin >> student.marks_of_subjects[i];	
	}
	return cin;
}

ostream& operator<<(ostream& cout, Student student)
{
	cout << "ROLL NO : " << student.rollno<<endl;
	cout << "NAME : " << student.name << endl;
	cout << "SUBJECT1 MARKS : " << student.marks_of_subjects[0] << endl;
	cout << "SUBJECT2 MARKS : " << student.marks_of_subjects[1] << endl;
	cout << "SUBJECT3 MARKS : " << student.marks_of_subjects[2] << endl;
	cout << "TOTAL MARKS : " << student.total_marks << endl;
	cout << "GRADE : " << student.grade;
	return cout;
}

int main()
{
	int no_of_students=-1;
	cout << "ENTER NUMBER OF STUDENTS : ";
	cin >> no_of_students;
	Student *student=new Student[no_of_students];
	cout << "ENTER "<<no_of_students<<" STUDENTS DETAILS" << endl;
	for (int i = 0; i < no_of_students; i++)
	{
		cout << "ENTER STUDENT " << (i + 1) << " DETAILS" << endl;
		cin >> student[i];
	}
	generate_result(student, no_of_students);
	cout << "THE "<<no_of_students<<" STUDENTS DETAILS ARE" << endl;
	for (int i = 0; i < no_of_students; i++)
	{
		cout << "STUDENT " << (i + 1) << " DETAILS ARE" << endl;
		cout << student[i];
	}
	_getch();
	return 0;
}