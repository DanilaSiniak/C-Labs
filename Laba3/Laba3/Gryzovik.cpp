#include "Gryzovik.h"
Gryzovik::Gryzovik() {}
Gryzovik::Gryzovik(int GryzTonn) {
	this->GryzTonn = GryzTonn;


}
Gryzovik::Gryzovik(const Gryzovik& other) {
	GryzTonn = other.GryzTonn;


}
Gryzovik::~Gryzovik() {}

bool Gryzovik::operator == (const Gryzovik& right) {
	return (GryzTonn == right.GryzTonn);
}
bool Gryzovik::operator != (const Gryzovik& right) {
	return !(*this == right);
}
Gryzovik& Gryzovik::operator = (const Gryzovik& right) {
	GryzTonn = right.GryzTonn;

	return *this;
}

void Gryzovik::Print() {
	cout << "Максимальная грузоподъёмность грузовика" << GryzTonn  << endl;

}
void Gryzovik::Read() {

	cout << "Введите грузоподъёмность грузовика: ";
	cin >> GryzTonn;

}
