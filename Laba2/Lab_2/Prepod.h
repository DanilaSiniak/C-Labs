#pragma once
#include "Person.h"
class Prepod : public Person {
protected:
	char* subject;
public:
	Prepod();
	Prepod(char* name, int year_old, char* subject);
	void set(char* name, int year_old, char* subject);
	void show();
	~Prepod();
};
