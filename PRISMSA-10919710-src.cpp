#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
	int t, i;

	cin >> t;

	int vol[t];

	for (i = 0; i < t; i++) {
		cin >> vol[i];
	}

	for (i = 0; i < t; i++) {
		cout << setprecision(10) << fixed << (long double) 3 * sqrt(3) * (pow(4 * vol[i], (long double)2/3)) / 2 << endl;
	}

	return 0;
}
