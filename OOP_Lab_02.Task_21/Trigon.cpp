#include <iostream>
#include <cmath>
#include "Trigon.h"

using namespace std;
const double PI = 3.14159265;


Trigon::Trigon() {
	cout << "Trigon created" << endl;
}
Trigon::Trigon(const Trigon& trigon)
{
	this->a = trigon.a;
	this->b = trigon.b;
	this->c = trigon.c;
}
Trigon::~Trigon() {
	cout << "Trigon is deleted" << endl;
}
void Trigon::SetA(int a) {
	this -> a = a;
	if (a < 0)
		cout << "Mistake" << endl;
}
void Trigon::SetB(int b) {
	this->b = b;
	if (b < 0)
		cout << "Mistake" << endl;
}
void Trigon::SetC(int c) {
	this->c = c;
	if (c < 0)
		cout << "Mistake" << endl;
}
void Trigon::Perimeter() {
	cout << "Периметер = " << a + b + c << endl;
}
void Trigon::Area() {
	double p = ((a + b + c) / 2);
	double area = sqrt(p * (p - a) * (p - b) * (p - c));
	cout << "Площа = " << area << endl;

}

void Trigon::Angle_A_B() {
	double k1 = acos((a * a + b * b - c * c) / (2 * a * b)) * 180 / PI;
	cout << "Кут між А і Б = " << k1 << endl;
}

void Trigon::Angle_A_C() {

	double k2 = acos((a * a + c * c - b * b) / (2 * a * c)) * 180 / PI;
	cout << "Кут між А і С = " << k2 << endl;
}

void Trigon::Angle_C_B() {

	double k3 = acos((b * b + c * c - a * a) / (2 * b * c)) * 180 / PI;
	cout << "Кут між С і Б = " << k3 << endl;
}
