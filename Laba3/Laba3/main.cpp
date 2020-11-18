#include "Auto.h"
#include "Error.h"
#include "Gryzovik.h"
#include "SredstvoPeredvizaniya.h"
#include "Velosiped.h"
#include "Sredstvo.h"

void menu(Sredstvo arr);

int main() {
	setlocale(LC_ALL, "ru");
	system("color f0");

	cout << "Задание. Вариант 2." << endl
		<< "Написать программу, в которой описана иерархия классов: геометрические передвижения (велосипед, автомобиль, грузовик)."
		<< endl << "писать класс для хранения коллекции фигур (массива указателей на базовый класс), в котором пергрузить операцию [ ],"
		<< endl << "операции ==, !=, =. Продеманстрировать работу операторов." << endl;

	Sredstvo arr(0);
	menu(arr);

	return 0;
}

void menu(Sredstvo arr) {
	bool exit = false;

	while (!exit) {
		cout << "1 - добавить Автомобиль" << endl
			<< "2 - добавить Велосипед" << endl
			<< "3 - добавить Грузовик" << endl
			<< "4 - сравнить Грузовики" << endl
			<< "5 - показать средство передвижения по индексу" << endl
			<< "6 - показать все средства передвижения" << endl
			<< "7 - удалить с конца" << endl
			<< "8 - удалить по индексу" << endl
			<< "0 - Exit" << endl;
		try
		{
			int num;
			cin >> num;
			cout << endl;
			switch (num)
			{
			case 1:
			{
				Auto* obj1 = new Auto;
				obj1->Read();
				Auto* obj2 = new Auto;
				obj2 = obj1;

				bool temp = false;
				cout << "Добавить в конец(0) или по индексу(1)?";
				cin >> temp;
				if (temp) {
					int index;
					cout << "Введите индекс: ";
					cin >> index;
					arr.add(index, obj2);
				}
				else {
					arr.addToTheEnd(obj2);
				}
				break;
			}
			case 2:
			{
				Velosiped* obj = new Velosiped;
				obj->Read();
				bool temp = false;
				cout << "Добавить в конец(0) или по индексу(1)?";
				cin >> temp;
				if (temp) {
					int index;
					cout << "Введите индекс: ";
					cin >> index;
					arr.add(index, obj);
				}
				else {
					arr.addToTheEnd(obj);
				}
				break;
			}
			case 3:
			{
				Gryzovik* obj = new Gryzovik;
				obj->Read();
				bool temp = false;
				cout << "Добавить в конец(0) или по индексу(1)?";
				cin >> temp;
				if (temp) {
					int index;
					cout << "Введите индекс: ";
					cin >> index;
					arr.add(index, obj);
				}
				else {
					arr.addToTheEnd(obj);
				}
				break;
			}
			case 4:
			{
				Gryzovik obj1;
				obj1.Read();
				Gryzovik obj2;
				obj2.Read();
				if (obj1 == obj2) {
					cout << "Грузовики одинаковые" << endl;
				}
				else if (obj1 != obj2) {
					cout << "Грузовики не одинаковые" << endl;
				}
				break;
			}
			case 5:
			{
				int index;
				cout << "Введите индекс: ";
				cin >> index;
				if (arr[index] != 0) {
					arr[index]->Print();
				}
				break;
			}
			case 6:
			{
				cout << "Количество средств передвижения= " << arr.get_count() << endl;
				for (int i = 0; i < arr.get_count(); i++) {
					arr[i]->Print();
				}
				break;
			}
			case 7:
			{
				arr.deleteFromTheEnd();
				break;
			}
			case 8:
			{
				int index;
				cout << "Введите индекс: ";
				cin >> index;
				arr.del(index);
				break;
			}
			case 0:
				exit = true;
			}
			cout << endl;
		}
		catch (IndexError& e)
		{
			cout << "Ошибка индекса: " << e.get_message() << endl;
		}
		catch (...)
		{
			cout << "Неизвестная ошибка." << endl;
		}
	}
}
