using namespace std;
#include <iostream>
#include "function.h"
int main()
{
	setlocale(LC_ALL, "Russian");
	int n = 5;
	double* x = new double[n];
	double* y = new double[n];
	x[0] = 1;
	x[1] = 1.5;
	x[2] = 2;
	x[3] = 2.5;
	x[4] = 3;
	y[0] = 1;
	y[1] = 0.66667;
	y[2] = 0.5;
	y[3] = 0.4;
	y[4] = 0.33333;
	cout << "l = " << diff_l(x, y, 2) << endl;
	cout << "r = " << diff_r(x, y, 2) << endl;
	cout << "c = " << diff_c(x, y, 2) << endl;
	cout << "l_2 = " << diff_2_l(x, y, 2) << endl;
	cout << "r_2 = " << diff_2_r(x, y, 2) << endl;
	cout << "c_2 = " << diff_2_c(x, y, 2) << endl;
	return 0;
}