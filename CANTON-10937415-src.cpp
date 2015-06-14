#include <iostream>

using namespace std;

int main()
{
	int i, t;

	cin >> t;

	unsigned long j, k, l, m, s, a[t];

	for (i = 0; i < t; i++) {
		cin >> a[i];
	}

	for (i = 0; i < t; i++) {
		s = 0;
		j = 1;

		while (s < a[i]) {
			s = s + j;

			j++;
		}

		j = j - 1;
		
		k = j;
		l = 1;
		if (j % 2 == 0) {
			for (m = 0; m < s - a[i]; m++) {
				k--;
				l++;
			}
			cout << "TERM " << a[i] << " " << "IS " << k << "/" << l << endl;
		} else {
			for (m = 0; m < s - a[i]; m++) {
				k--;
				l++;
			}
			cout << "TERM " << a[i] << " " << "IS " << l << "/" << k << endl;
		}
	}

	return 0;
}
