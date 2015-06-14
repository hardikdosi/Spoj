#include <iostream>

using namespace std;

int main()
{
	int arr[100], i, j = 0, n, count, x;

	cin >> n;

	while (n) {
		int a[n], b[n];

		for (i = 0; i < n; i++) {
			cin >> a[i];
		}

		for (i = 1; i <= n; i++) {
			x = a[i - 1];
			b[x - 1] = i;
		}
		count = 0;

		for (i = 0; i < n; i++) {
			if (a[i] == b[i]) {
				count++;
			}
		}

		if (count == n) {
			arr[j++] = 1;
		} else {
			arr[j++] = 0;
		}

		cin >> n;
	}

	for (i = 0; i < j; i++) {
		if (arr[i] == 1) {
			cout << "ambiguous" << endl;
		} else {
			cout << "not ambiguous" << endl;
		}
	}

	return 0;
}

