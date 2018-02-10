#include <iostream>
#include <math.h>

using namespace std;

int fib(int n) {
	int result;
	if (n == 0) {
		return 0;
	}
	else if (n == 1) {
		return 1;
	}
	else
		result = (1 / (sqrt(5))*(pow((1 + sqrt(5)) / 2), n) - (1 / (sqrt(5))*(pow((1 - sqrt(5)) / 2), n);
	return result;

} 

int main() {
	int n = 21;
	cout << "fib(" << n << ")= " << fib(n) << endl;
}