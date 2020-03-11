#include <iostream>
#include <cmath>
#include "Trigon.h"

using namespace std;

int main()
{
	cout << "OOP Lab #01: Classes and Objects" << endl;
	system("chcp 1251");
	 Trigon *a = new Trigon;
	a-> SetA(10);
	a-> SetB(7);
	a-> SetC(5);
	a-> Perimeter();
	a-> Area();
	a-> Angle_A_B();
	a-> Angle_A_C();
	a-> Angle_C_B();

}