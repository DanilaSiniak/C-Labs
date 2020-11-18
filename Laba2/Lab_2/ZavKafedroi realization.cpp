#include "ZavKafedroi.h"
ZavKafedroi::ZavKafedroi() : Person() {}

ZavKafedroi::ZavKafedroi(char* name, int years_old, int salary) : Person() {
	this->name = name;
	this->year_old = years_old;
	this->salary = salary;
}

void ZavKafedroi::set(char* name, int years_old, int salary) {
	this->name = name;
	this->year_old = years_old;
	this->salary = salary;
}

void ZavKafedroi::show() {
	cout << "��� �������������: " << name << endl;
	cout << "�������: " << year_old << endl;
	cout << "��������: " << salary << endl;
}

ZavKafedroi::~ZavKafedroi() {}