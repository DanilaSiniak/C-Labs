#pragma once
#include "SredstvoPeredvizaniya.h"
#include "Error.h"
class Sredstvo {
private:
	SredstvoPeredvizaniya** arr;
	int count;
public:
	Sredstvo(int count);
	~Sredstvo();
	SredstvoPeredvizaniya* operator[] (int n) const;
	SredstvoPeredvizaniya*& operator[] (int n);
	int get_count();
	void addToTheEnd(SredstvoPeredvizaniya* vehicle);
	void add(int index, SredstvoPeredvizaniya* vehiclee);
	void deleteFromTheEnd();
	void del(int index);
};
