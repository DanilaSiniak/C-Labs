#include "Velosiped.h"

Velosiped::Velosiped() {}
Velosiped::Velosiped(int MaxSpeed) {
	this->MaxSpeed = MaxSpeed;
}
Velosiped::Velosiped(const Velosiped& other) {
	MaxSpeed = other.MaxSpeed;
}
Velosiped::~Velosiped() {}

bool Velosiped::operator == (const Velosiped& right) {
	return MaxSpeed == right.MaxSpeed;
}
bool Velosiped::operator != (const Velosiped& right) {
	return !(*this == right);
}
Velosiped& Velosiped::operator = (const Velosiped& right) {
	MaxSpeed = right.MaxSpeed;
	return *this;
}

void Velosiped::Print() {
	cout << endl << "Марка: " << "Марка =" << MaxSpeed << endl;

}
void Velosiped::Read() {
	cout << endl << "Введите максимальную скорость электровелосипеда: ";
	cin >> MaxSpeed;
}
