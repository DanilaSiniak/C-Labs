#include"Person.h"
#include"Prepod.h"
#include"Student.h"
#include"ZavKafedroi.h"

int main()
{
	setlocale(LC_ALL, "rus");
	system("color F0");

	char* name = new char[100];

	cin.getline(name, 100);
	ZavKafedroi object1(name, 21, 900);
	ZavKafedroi p = object1;
	p.add(); //объект сам добавляет себя в список
	object1.show();
	cout << endl;

	name = new char[100];
	char* subject = new char[100];

	cin.getline(name, 100);
	cin.getline(subject, 100);
	Prepod* object2 = new Prepod(); //включение объекта в список при создании объекта
	object2->set(name, 24, subject);
	object2->show();
	cout << endl;

	name = new char[100];
	subject = new char[100];
	cin.getline(name, 100);
	cin.getline(subject, 100);
	Student object3 = Student();
	object3.set(name, 26, subject, 121);
	object3.show();
	cout << endl;

	Person::look_up_list();

	delete object2;
	delete[] name;
	delete[] subject;
	system("pause");
	return 0;
}
