//#include <stdio.h>
#include <iostream>
//#include "Question4.h"

using namespace std;
void convertToFahrenheit(double** x) {

	double* x = *x * 1.8 + 32.0;
	
}
void convertToCelsius(double** y) {
	double* y = (*y - 32) / 1.8;
}

void main() {
	double x=25.0;
	double y = 80.0;
	 
	double* px = &x;
	double* py = &y;
	convertToFahrenheit(&px);
	convertToCelsius(&py);

	cout << x << " degrees celsius is " << x << " degrees fahrenheit." << endl;
	cout << y << " degrees fahrenheit is " << y << " degrees celsius." << endl;
    
}