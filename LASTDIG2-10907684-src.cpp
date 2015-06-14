#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	int t, i, s, j, x, z;
	unsigned long long b;
	char a[1001];

	cin >> t;

	int p[t];

	for (i = 0; i < t; i++) {
		cin >> a >> b;

		if (b == 0) {
			p[i] = 1;
			continue;
		}

		b = b % 4;

		if (b == 0) {
			b = 4;
		}

		s = strlen(a);

		x = a[s - 1] - '0';

		z = 1;
		for (j = 0; j < b; j++) {
			z = (z * x) % 10;
		}
		p[i] = z;
	}

	for (i = 0; i < t; i++) {
		cout << p[i] << endl;
	}

	return 0;
}
