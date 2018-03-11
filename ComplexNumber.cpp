#include "ComplexNumber.h"



ComplexNumber::ComplexNumber()
{
}

ComplexNumber::ComplexNumber(int re, int im) {
	this->real = re;
	this->imag = im;
}

ComplexNumber::ComplexNumber(ComplexNumber A, ComplexNumber B) {

	this->real = A.get_real() + B.get_real();

	this->imag = A.get_imaginary() + B.get_imaginary();
}
void ComplexNumber::set_real(int re) {
	this->real = re;
}

void ComplexNumber::set_imaginary(int im) {
	this->imag = im;
}

string ComplexNumber::get(void) {
	stringstream ss;
	ss << this->real;
	if (this->imag >= 0)
		ss << "+";
	ss << this->imag << "i";
	return ss.str();
}

int ComplexNumber::get_real() {


	return this->real;

}

int ComplexNumber::get_imaginary() {

	return this->imag;
}

ComplexNumber::~ComplexNumber()
{
}
