#include "Sredstvo.h"

Sredstvo::Sredstvo(int count) {
	arr = new SredstvoPeredvizaniya * [count];
	for (int i = 0; i < count; i++) {
		arr[i] = nullptr;
	}
	this->count = count;
}
Sredstvo::~Sredstvo() {
	for (int i = 0; i < count; i++) {
		if (arr[i] != nullptr) {
			delete arr[i];
		}
		delete[]arr;
	}
}

SredstvoPeredvizaniya* Sredstvo::operator[] (int n) const {
	if (n < 0 || n >= count) {
		throw IndexError("Вы вышли за границы массива.");
	}
	return arr[n];
}
SredstvoPeredvizaniya*& Sredstvo::operator[] (int n) {
	if (n < 0 || n >= count) {
		throw IndexError("Вы вышли за границы массива.");
	}
	return arr[n];
}

int Sredstvo::get_count() {
	return count;
}

void Sredstvo::addToTheEnd(SredstvoPeredvizaniya* figure) {
	SredstvoPeredvizaniya** temp = new SredstvoPeredvizaniya * [count + 1];
	for (int i = 0; i < count; i++) {
		temp[i] = arr[i];
	}
	arr = temp;
	temp[count] = figure;
	count++;
}

void Sredstvo::add(int index, SredstvoPeredvizaniya* figure) {
	if (index < 0 || index > count) {
		addToTheEnd(figure);
		throw IndexError("Вы вышли за границы массива. Фигура будет добавлена в конец массива");
	}
	SredstvoPeredvizaniya** temp = new SredstvoPeredvizaniya * [count + 1];
	for (int i = 0; i < index; i++) {
		temp[i] = arr[i];
	}
	temp[index] = figure;
	for (int i = index; i < count; i++) {
		temp[i + 1] = arr[i];
	}
	arr = temp;
	count++;
}

void Sredstvo::deleteFromTheEnd() {
	SredstvoPeredvizaniya** temp = new SredstvoPeredvizaniya * [count - 1];
	for (int i = 0; i < count - 1; i++) {
		temp[i] = arr[i];
	}
	arr = temp;
	count--;
}

void Sredstvo::del(int index) {
	SredstvoPeredvizaniya** temp = new SredstvoPeredvizaniya * [count - 1];
	for (int i = 0; i < index; i++) {
		temp[i] = arr[i];
	}
	for (int i = index + 1; i < count; i++) {
		temp[i - 1] = arr[i];
	}
	arr = temp;
	count--;
}
