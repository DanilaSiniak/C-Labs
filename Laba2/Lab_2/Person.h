#pragma once
#include <iostream>

using namespace std;

class Person
{
protected:
	char* name;
	int year_old;
	virtual void show();
public:
	Person();
	static Person* head; //указатель на начало связанного списка 
	Person* next;
	void add();
	static void look_up_list(); //функция для просмотра списка
	~Person();
};
