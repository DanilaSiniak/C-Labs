#pragma once
#include "SredstvoPeredvizaniya.h"
class Auto : public SredstvoPeredvizaniya
{
private:

	int Year;
public:
	Auto();
	Auto(int Year);
	Auto(const Auto& other);
	~Auto();

	bool operator == (const Auto& right);
	bool operator != (const Auto& right);
	Auto& operator = (const Auto& right);

	void Print();
	void Read();
};
