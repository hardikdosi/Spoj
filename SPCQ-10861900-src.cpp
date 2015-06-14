#include <iostream>

using namespace std;

int main()
{
	int t, i;
	unsigned long long x, j, sum, dup;

	cin >> t;

	unsigned long long a[t];

	for (i = 0; i < t; i++) {
		cin >> x;

		for (j = x; ; j++) {
			dup = j;
	
			sum = 0;
			while (dup > 0) {
				sum = sum + dup % 10;
				dup = dup / 10;
			}

			if (j % sum == 0) {
				a[i] = j;
				break;
			}
		}
	}

	for (i = 0; i < t; i++) {
		cout << a[i] << endl;
	}

	return 0;
}
