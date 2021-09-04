#include <iostream>
#include <cmath>
#include <conio.h>

/*
	Source by GeeksForGeeks
	Modified For Learn by RK
	I.D.E : VS2019
*/

using namespace std;

int main() {
	// Take any values
	int a = 5;
	double f1 = nan("2.0");
	bool hasil;

	hasil = islessgreater(f1, a);
	cout << f1 << " islessgreater than " << a << ": " << hasil;

	_getch();
	return 0;
}
