#include <iostream>
#include "number.h"
using namespace std;

int main()
{
	Number number;
	double num1, num2;
	cin >> num1 >> num2;
	cout << number.Add(num1, num2) << endl;
}