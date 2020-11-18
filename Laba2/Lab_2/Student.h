#pragma once
#include "Prepod.h"
class Student : public Prepod 
{
protected:
	int number_of_student;
public:
	Student();
	Student(char* name, int year_old, char* subject, int number_of_students);
	void set(char* name, int year_old, char* subject, int number_of_students);
	void show();
	~Student();
};
