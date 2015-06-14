#include <iostream>

using namespace std;

int main()
{
	int t, i;

	cin >> t;

	long long a[t], count, x, r;

	for (i = 0; i < t; i++) {
		count = 0;

		cin >> x;

		while (x > 0) {
			r = x / 5;
			count = count + r;
			x = r;
		}

		a[i] = count;
	}

	for (i = 0; i < t; i++) {
		cout << a[i] << endl;
	}

	return 0;
}
