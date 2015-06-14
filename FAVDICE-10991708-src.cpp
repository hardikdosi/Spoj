#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int t, i, x, j;

	cin >> t;

	double a[t], sum;

	for (i = 0; i < t; i++) {
		cin >> x;

		sum = 0;
		for (j = 1; j <= x; j++) {
			sum = sum + (double)x / j;
		}

		a[i] = sum;
	}

	for (i = 0; i < t; i++) {
		cout << fixed << setprecision(2) << a[i] << endl;
	}

	return 0;
}
			 
