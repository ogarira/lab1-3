#include<iostream>;
#include<math.h>;
using namespace std;
int main() {
	double x, y, z, F = 0;
	cout << "Enter values for x,y,z";
	cin >> x >> y >> z;
	double g = (x < (y - x)) ? x : (y - x);
	double k = (y * z) > (x * x) ? (y * z) : (x * x);
	if (abs(k + cos(2 * pow(z, 3))) < 1e-9) {
		cout << "\nError: is zero!";
	}
	else {
		F = g / (k + cos(2 * pow(z, 3)));
		cout << "F = " << F << endl;
	}
}