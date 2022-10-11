#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double a;
	double b;
	double c;
	double x;
	double F;

	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	cout << "x = "; cin >> x;

	// 1 sposib

	if (x + c < 0 && a != 0)
		F = (-1) * (a * x * x) - b;
	else
		if (x - c > 0 && a == 0)
			F = (x - a) / (x - c);
		else
			F = x / c + c / x;

	cout << "1)F = " << F << endl;

	// 2 sposib 

	if (x + c < 0 && a != 0)
		F = (-1) * (a * x * x) - b;

	if (x - c > 0 && a == 0)
		F = (x - a) / (x - c);

	if (!(x - c > 0 && a == 0) && !(x + c < 0 && a != 0))
		F = x / c + c / x;
		
	cout << "2)F = " << F << endl;

	cin.get();
	return 0;

}