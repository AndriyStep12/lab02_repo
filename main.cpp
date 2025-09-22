#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	double a; // вхідний параметр
	double z1; // результат обчислення 1-го виразу
	double z2; // результат обчислення 2-го виразу
	cout << "New branch" << endl;
	cout << "x = "; cin >> a;
	z1 = 1 - (1.0 / 4.0)*pow(sin(2 * a), 2)+cos(2*a);
	z2 = pow(cos(a), 2) + pow(cos(a), 4);
	cout << endl;
	cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;
	cin.get();
	return 0;
}