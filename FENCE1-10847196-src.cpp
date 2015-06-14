#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
	int a[200], i, j;
	float area, pi = atan(1.0) * 4; 

	for (i = 0; i < 200; i++) {
		cin >> a[i];

		if (a[i] == 0) {
			break;
		}
	}

	for (j = 0; j < i; j++) {
		area = (a[j] * a[j]) / (2 * pi);

		cout << fixed << setprecision(2) << area << endl;
	}

	return 0;
}
