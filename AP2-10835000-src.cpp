#include <iostream>

using namespace std;

int main()
{
	int t, i, n, j;

	cin >> t;

	long long a[t], b[t], sum[t], x, y;

	for (i = 0; i < t; i++) {
		cin >> a[i] >> b[i] >> sum[i];
	}

	for (i = 0; i < t; i++) {
		n = 2 * sum[i] / (a[i] + b[i]);
		
		cout << n << endl;

		x = a[i] - 2 * (b[i] - a[i]) / (n - 5);
		y = (b[i] - a[i]) / (n - 5);

		for (j = 1; j <= n; j++) {
			cout << x + (j - 1) * y <<" ";
		}
		cout << endl;
	}

	return 0;
}
