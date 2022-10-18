using namespace std;
#include <iostream>
#include "function.h"
#include<ctime>

double f_2(double x, double y)
{
	return ((x + y) * (x + y));
}
void f_1(double* res_x, double* res_y,int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << res_x[i] << "   " << res_y[i] << endl;
		res_x[i] = 0;
		res_y[i] = 0;
	}
}
int main()
{
	setlocale(LC_ALL, "Russian");
	int n = 11;
	double* res_x = new double[n];
	double* res_y = new double[n];
	/*M_Euler_explicit(f_2, 0.1, 0, 0, res_x, res_y, n);
	*/
	/*M_Euler_implicit(f_2, 0.1, 0, 0, res_x, res_y, n);
	*/
	/*M_Euler_improved(f_2, 0.1, 0, 0, res_x, res_y, n);
	*/
	/*M_Runge_Kutta_4(f_2, 0.1, 0, 0, res_x, res_y, n);*/
	//adams(f_2, 0.1, 0, 0, res_x, res_y, n);
	//f_1(res_x, res_y, n);
	ABM(f_2, 0.1, 0, 0, res_x, res_y, n);
	f_1(res_x, res_y, n);
	return 0;
}
//int n = 5;
	//double* x = new double[n];
	//double* y = new double[n];
	//*x[0] = 1;
	//x[1] = 1.5;
	//x[2] = 2;
	//x[3] = 2.5;
	//x[4] = 3;
	//y[0] = 1;
	//y[1] = 0.66667;
	//y[2] = 0.5;
	//y[3] = 0.4;
	//y[4] = 0.33333;*/
	//x[0] = 0.0;
	//x[1] = 1.0;
	//x[2] = 2.0;
	//x[3] = 3.0;
	//x[4] = 4.0;
	//y[0] = 0.0;
	//y[1] = 1.0;
	//y[2] = 1.4142;
	//y[3] = 1.7321;
	//y[4] = 2.0;
	//cout << "l = " << diff_l(x, y, 2) << endl;
	//cout << "r = " << diff_r(x, y, 2) << endl;
	//cout << "c = " << diff_c(x, y, 2) << endl;
	//cout << "l_2 = " << diff_2_l(x, y, 2) << endl;
	//cout << "r_2 = " << diff_2_r(x, y, 2) << endl;
	//cout << "c_2 = " << diff_2_c(x, y, 2) << endl;

//*int M =3;
//double* W = new double[M];
//double* z = new double[M];
//z[0] = -sqrt(0.6);
//z[1] = 0;
//z[2] = sqrt(0.6);
//W[0] = 5. / 9;
//W[1] = 8. / 9;
//W[2] = 5. / 9;
//int N = 1;
//double a = 0;
//double b = 1;
//cout << Gauss(f1, W, z, N, M, a, b) << endl;*/
//double h_x = 0.01;
//double h_y = 0.01;
//double alpha = 1. / 2;
//double a, b, c, d;
//a = 0;
//c = 0;
//b = 1;
//d = 1;
//int N, M;
//double pi = 3.1415926535;
//double Real = pi * pi / 12.;
//double I;
//double beta = sqrt(1 / 3.);
//cout << "k" << "   " << "I" << "   " << "e" << "   " << "Относительная погрешность:" << endl;
//for (int i = 0; i < 3; i++)
//{
//	h_x = pow(alpha, i);
//	h_y = pow(alpha, i);
//	M = (d - c) / h_y;
//	N = (b - a) / h_x;
//	I = Gauss_2(f12, beta, N, M, a, b, c, d);
//	cout << i << "    " << I << "   " << Real - I << "   " << fabs((Real - I) / Real) << endl;
//}