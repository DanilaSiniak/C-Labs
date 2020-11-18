#pragma once
#include "SredstvoPeredvizaniya.h"
class Gryzovik :public SredstvoPeredvizaniya {
private:
	int GryzTonn;
public:
	Gryzovik();
	Gryzovik(int GryzTonn);
	Gryzovik(const Gryzovik& other);
	~Gryzovik();
	bool operator == (const Gryzovik& right);
	bool operator != (const Gryzovik& right);
	Gryzovik& operator = (const Gryzovik& right);
	void Print();
	void Read();

};
