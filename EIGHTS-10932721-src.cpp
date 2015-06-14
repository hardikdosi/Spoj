#include <iostream>

using namespace std;

int main()
{
	int t, i;

	cin >> t;

	unsigned long long a[t], x;

	for (i = 0; i < t; i++) {
		cin >> x;

		a[i] = 192 + (x - 1) * 250;
	}

	for (i = 0; i < t; i++) {
		cout << a[i] << endl;
	}

	return 0;
}
