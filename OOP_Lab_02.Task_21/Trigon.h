#pragma once
class Trigon
{
public:
	double a, b, c;
	Trigon();
	Trigon(const Trigon& trigon);
	~Trigon();
	void SetA(int a);
	void SetB(int b);
	void SetC(int c);
	void Angle_A_B();
	void Angle_A_C();
	void Angle_C_B();
	void Area();
	void Perimeter();

};
