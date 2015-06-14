#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
	int t, i;
	long x, y, z;

	cin >> t;

	double a[t];

	for (i = 0; i < t; i++) {
		cin >> x >> y;

		z = x * x - y * y;

		a[i] = 2 * sqrt(z);
	}

	for (i = 0; i < t; i++) {
		cout << fixed << setprecision(3) << a[i] << endl;
	}

	return 0;
}
