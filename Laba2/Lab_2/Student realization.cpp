#include "Student.h"

Student::Student(): Prepod() {} 

Student::Student(char* name, int year_old, char* subject, int number_of_students) : Prepod(name,year_old,subject) 
{
	this->name= name;
	this->year_old = year_old;
	this->subject = subject;
	this->number_of_student = number_of_students;
}

void Student::set(char* name, int year_old, char* subject, int number_of_students)
{
	this->name = name;
	this->year_old = year_old;
	this->subject = subject;
	this->number_of_student = number_of_students;
}

void Student::show() 
{
	cout << "��� �������������: " << name << endl;
	cout << "�������: " << year_old << endl;
	cout << "������� ��������: " << subject << endl;
	cout << "���������� ���������: " << number_of_student << endl;
}

Student::~Student() {}
