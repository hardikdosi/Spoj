#include <iostream>
#include <math.h>
#define pi 3.14159265358979323

using namespace std;

int main()
{
	int t, i;
	long double c;

	cin >> t;

	unsigned long long a[t];

	for (i = 0; i < t; i++) {	
		cin >> a[i];
	}

	for (i = 0; i < t; i++) {
		if (a[i] == 0 || a[i] == 1) {
			cout << 1 << endl;
			continue;
		}

		c = (log(2 * pi * a[i]) / 2 + a[i] * (log(a[i]) - 1)) / log(10);

		cout << (unsigned long long)floor(c) + 1 << endl;
	}

	return 0;
}