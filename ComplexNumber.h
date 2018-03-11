#include<sstream>

using namespace std;

#pragma once
class ComplexNumber
{
private:
	int real;
	int imag;
public:
	ComplexNumber();
	ComplexNumber(int re, int im);
	ComplexNumber(ComplexNumber A, ComplexNumber B);
	void set_real(int re);
	void set_imaginary(int im);
	int  get_real();
	int get_imaginary();
	string get(void);
	~ComplexNumber();
};

