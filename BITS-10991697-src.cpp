#include <iostream>

using namespace std;

int count_bits(int);

int main()
{
	int i, t;

	cin >> t;

	int a[t];

	for (i = 0; i < t; i++) {
		cin >> a[i];
	}

	for (i = 0; i < t; i++) {
		cout << count_bits(a[i]) << endl;
	}

	return 0;
}

int count_bits(int x)
{
	int r, count = 0, i, j;

	for (i = x; i >= 0; i--) {
		j = i;

		while (j > 0) {
			r = j % 2;
			j = j / 2;
		
			if (r == 1) {
				count++;
			}
		}
	}

	return count;
}
