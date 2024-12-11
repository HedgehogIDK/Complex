#pragma once
#include <iostream>

using namespace std;

class Complex
{
	double real, image;

public:
	Complex():Complex(1,1){}
	explicit Complex(double real_p):Complex(real_p,1){}
	Complex(double real_p, double image_p);

	Complex(const Complex& obj);

	void set_Real(double real_p);
	void set_Image(double image_p);
	void print();

	Complex operator+(Complex& obj)const;

	Complex operator-(Complex& obj)const;

	Complex operator*(Complex& obj)const;

	Complex operator/(Complex& obj)const;

	
};

