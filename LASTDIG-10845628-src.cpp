#include <iostream>

using namespace std;

int main()
{
	int t, x, i;
	unsigned long long j, y, z, r;

	cin >> t;

	int a[t];

	for (i = 0; i < t; i++) {
		cin >> x >> y;

		if (y == 0) {
			a[i] = 1;
			continue;
		}	
		
		r = y % 4;

		if (r == 0) {
			r = 4;
		}
			
		z = 1;
		for (j = 0; j < r; j++) {
			z = (z * x) % 10;
		}

		a[i] = z;	
	}

	for (i = 0; i < t; i++) {
		cout << a[i] << endl;
	}

	return 0;
}
