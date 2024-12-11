#include <iostream>
#include "Complex.h"

using namespace std;


int main() {
    Complex a(3, 4);
    Complex b(1, -2);

    Complex sum = a + b;
    Complex diff = a - b;
    Complex prod = a * b;
    Complex quot = a / b;

    cout << "a = "; a.print(); cout << endl;
    cout << "b = "; b.print(); cout << endl;

    cout << "a + b = "; sum.print(); cout << endl;
    cout << "a - b = "; diff.print(); cout << endl;
    cout << "a * b = "; prod.print(); cout << endl;
    cout << "a / b = "; quot.print(); cout << endl;

    return 0;
}