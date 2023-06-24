#include <iostream>
using namespace std;

int main() {
	double pi = 3.14;
	double radian;
	double x = -60;
	radian = x * pi/180; 
	double sinx = sin(radian);
	cout << "sin " << x << " degree = " << sinx <<"\n";
	x = 45;
	double cosx = cos(radian);
	cout << "cos " << x << " degree = " << cosx;
}

