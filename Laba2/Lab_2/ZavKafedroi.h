
#pragma once
#include "Person.h"
class ZavKafedroi :public Person {
protected:
	int salary;
public:
	ZavKafedroi();
	ZavKafedroi(char* name, int year_old, int salary);
	void set(char* name, int year_old, int salary);
	void show();
	~ZavKafedroi();
};
