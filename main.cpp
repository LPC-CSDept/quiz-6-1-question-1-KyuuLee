#include "q1.hpp"

int main()
{
	int num1, num2;
	float fnum1, fnum2;
	getinput(num1, num2);
	cout << num1 << " " << num2 << endl;
	swapTwoValues(num1, num2);
	cout << num1 << " " << num2 << endl;

	// -- Call overloaded function with float parameters
	getinput(fnum1, fnum2);
	cout << fixed << setprecision(2);
	cout << num1 << " " << num2 << endl;
	swapTwoValues(fnum1, fnum2);
	cout << num1 << " " << num2 << endl;
}