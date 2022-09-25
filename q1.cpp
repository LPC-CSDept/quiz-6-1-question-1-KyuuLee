#include <iostream>
#include <iomanip>
using namespace std;

void getinput(int &, int &);
void getinput(float &, float &);
void swapTwoValues(int &, int &);
void swapTwoValues(float &, float &);

//
int main()
{
	int num1, num2;
	float fnum1, fnum2;
	getinput(num1, num2);
	cout << setw(5) << num1 << setw(5) << num2 << setw(5) << endl;
	swapTwoValues(num1, num2);
	cout << setw(5) << num1 << setw(5) << num2 << setw(5) << endl;

	// -- Call overloaded function with float parameters
	getinput(fnum1, fnum2);
	cout << fixed << setprecision(2);
	cout << fnum1 << " " << fnum2 << endl;
	swapTwoValues(fnum1, fnum2);
	cout << fnum1 << " " << fnum2 << endl;
}
void getinput(int &num1, int &num2)
{
	cout << "Enter two values \n";
	cin >> num1 >> num2;
}
void swapTwoValues(int &i, int &j)
{
	int tmp;
	tmp = i;
	i = j;
	j = tmp;
}

void getinput(float &num1, float &num2)
{
	cout << "Enter two values \n";
	cin >> num1 >> num2;
}
void swapTwoValues(float &i, float &j)
{
	float tmp;
	tmp = i;
	i = j;
	j = tmp;
}