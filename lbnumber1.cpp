#include <iostream>
#include <math.h>

using namespace std;

int main() {
	const double a{ 13.7 }, b{ -10 };
	double rezult = 0;
	rezult=pow(a + b, 3);
	rezult += a * cos(a + b);
	const double d = sqrt(abs(b));
	const double h = (a * d)/(a + b);
	rezult += h;
	cout << "function(" << a << "," << b << "," << d << "," << h << " )=" << rezult << endl;








}
