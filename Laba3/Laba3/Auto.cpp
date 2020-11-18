#include "Auto.h"

Auto::Auto() {}

Auto::Auto(int Year) {
	this->Year = Year;


}
Auto::Auto(const Auto& other) {
	Year = other.Year;


}
Auto::~Auto() {}

bool Auto::operator == (const Auto& right) {
	return (Year == right.Year);
}
bool Auto::operator != (const Auto& right) {
	return !(*this == right);
}
Auto& Auto::operator = (const Auto& right) {
	Year = right.Year;

	return *this;
}
void Auto::Print() {
	cout << endl << "Машина" << ", Год выпуска" << Year << endl;

}
void Auto::Read() {

	cout << "Введите год выпуска: ";
	cin >> Year;

}
