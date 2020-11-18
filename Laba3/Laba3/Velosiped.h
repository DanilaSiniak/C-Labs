
#include "SredstvoPeredvizaniya.h"
class Velosiped :public SredstvoPeredvizaniya {
private:
    int MaxSpeed;
public:
	Velosiped();
	Velosiped(int MaxSpeed);
	Velosiped(const Velosiped& other);
	~Velosiped();

	bool operator == (const Velosiped& right);
	bool operator != (const Velosiped& right);
	Velosiped& operator = (const Velosiped& right);

	void Print();
	void Read();

};
