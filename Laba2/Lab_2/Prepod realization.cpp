#include "Prepod.h"
Prepod::Prepod() : Person() {}

Prepod::Prepod(char* name, int year_old, char* subject) : Person() {
	this->name = name;
	this->year_old = year_old;
	this->subject = subject;
}

void Prepod::set(char* name, int year_old, char* subject) {
	this->name = name;
	this->year_old = year_old;
	this->subject = subject;
}

void Prepod::show() {
	cout << "ФИО Преподавателя " << name << endl;
	cout << "Возраст"  << year_old << endl;
	cout << "Предмет обучения " << subject << endl;
}

Prepod::~Prepod() {}