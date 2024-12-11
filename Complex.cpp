#include "Complex.h"

void Complex::print() {
	if (image >= 0) {
		cout << real << " + " << image << "i";
	}
	else {
		cout << real << " - " << -image << "i";
	}
}

Complex::Complex(double real_p, double image_p) {
	if (!real_p)
		exit(333);//Ошибка данных

	real = real_p;

	if (!image_p)
		exit(333);//Ошибка данных

	image = image_p;
}

Complex::Complex(const Complex& obj) {
	real = obj.real;
	image = obj.image;
}

void Complex::set_Real(double real_p) {
	if (!real_p)
		exit(333);//Ошибка данных

	real = real_p;
}

void Complex::set_Image(double image_p) {
	if (!image_p)
		exit(333);//Ошибка данных

	image = image_p;
}

Complex Complex::operator+(Complex& obj)const {
	Complex buffer;

	buffer.real = real + obj.real;
	buffer.image = image + obj.image;

	return buffer;
}

Complex Complex::operator-(Complex& obj)const {
	Complex buffer;

	buffer.real = real - obj.real;
	buffer.image = image - obj.image;

	return buffer;
}

Complex Complex::operator*(Complex& obj)const {
	Complex buffer;

	buffer.real = real * obj.real - image * obj.image;
	buffer.image = real * obj.image + image * obj.real;

	return buffer;
}

Complex Complex::operator/(Complex& obj)const {
	Complex buffer;
	double deno = obj.real * obj.real + obj.image * obj.image;

	buffer.real = (real * obj.real + image * obj.image) / deno;
	buffer.image = (image * obj.real - real * obj.image) / deno;

	return buffer;
}