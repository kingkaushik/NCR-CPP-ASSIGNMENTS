#include<iostream>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

using namespace std;

class Student
{
	char *studentName;
	char *grade;
	float marks1, marks2, marks3;
public:
	Student()
	{
		this->studentName = NULL;
		this->grade = NULL;
		this->marks1 = this->marks2 = this->marks3 = 0;
	}
	Student(char *studentName, char *grade, float marks1, float marks2, float marks3)
	{
		int studentNameLength = strlen(studentName);
		this->studentName = (char*)calloc(studentNameLength+1,sizeof(char));
		strcpy_s(this->studentName, studentNameLength + 1, studentName);
		int gradeLength = strlen(grade);
		this->grade = (char*)calloc(gradeLength + 1, sizeof(char));
		strcpy_s(this->grade, gradeLength + 1, grade);
		this->marks1 = marks1;
		this->marks2 = marks2;
		this->marks3 = marks3;
	}

	char* getStudentName()
	{
		return studentName;
	}

	void set_grade(const char *grade)
	{
		int gradeLength = strlen(grade);
		this->grade = (char *)calloc(gradeLength + 1, sizeof(char));
		strcpy_s(this->grade, gradeLength + 1, grade);
	}

	char* get_grade()
	{
		return grade;
	}

};

class CollegeCourse
{
	Student student;
public:

	void set_Data(char *studentName,char *grade,float marks1,float marks2,float marks3)
	{
		int studentNameLength = strlen(studentName);
		Student student(studentName, grade, marks1, marks2, marks3);
		this->student =student;
	}

	void display()
	{
		cout << "STUDENT NAME IS " << student.getStudentName();
	}

	void computeGrade(float average)
	{
		if (average > 60)
		{
			student.set_grade("FIRST CLASS");
		}
		else if (average >= 50 and average <= 60)
		{
			student.set_grade("SECOND CLASS");
		}
		else if (average >= 40 and average <= 50)
			student.set_grade("THIRD CLASS");
		else
			student.set_grade("FAIL");
		char *grade = student.get_grade();
		*(grade + 0) = 'Z';
		cout << student.get_grade() << ":" << grade;
	}

	float calculateAverage(float marks1, float marks2, float marks3)
	{
		return (marks1 + marks2 + marks3) / 3;
	}

};

int main()
{
	CollegeCourse collegeCourse;
	char name[] = "kaushik";
	float marks1 = 100, marks2 = 100, marks3 = 100;
	char grade[] = "A";
	//collegeCourse.computeGrade(collegeCourse.calculateAverage(marks1, marks2, marks3));
	collegeCourse.set_Data(name, grade, marks1, marks2, marks3);
	collegeCourse.display();
	
	_getch();
	return 0;
}
