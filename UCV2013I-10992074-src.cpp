#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
	int i = 0, j;
	double ans[200], x, y, k;

	while (1) {
		cin >> x >> y;

		if (x == 0 && y == 0) {
			break;
		}

		k = M_PI / 2.0;

		ans[i++] = x / sin(k / y);
	}

	for (j = 0; j < i; j++) {
		cout << fixed << setprecision(2) << ans[j] << endl;
	}

	return 0;
}