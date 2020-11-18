#include "Person.h"

Person* Person::head = NULL;
Person::Person() {
	add();
}

void Person::show() {
	cout << "на месте виртуальной функции вывожу это" << endl;
}

void Person::add() {
	Person* p = this;
	p->next = head;
	head = p;
}

void Person::look_up_list() {
	Person* p = head;
	cout << "Просмотр списка" << endl;
	while (p) {
		cout << "<!-------------------------------------------------------!>" << endl;
		p->show();
		p = p->next;
	}
}

Person::~Person() {}