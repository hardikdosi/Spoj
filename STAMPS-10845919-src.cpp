#include <iostream>

using namespace std;

int main()
{
	int t, i, j, k, sum, size, x, temp, count;

	cin >> t;

	int a[t];

	for (i = 0; i < t; i++) {
		cin >> x >> size;

		int b[size];

		for (j = 0; j < size; j++) {
			cin >> b[j];
		}

		for (j = 0; j < size - 1; j++) {
			for (k = j + 1; k < size; k++) {
				if (b[k] > b[j]) {
					temp = b[j];
					b[j] = b[k];
					b[k] = temp;
				}
			}
		}

		sum = 0;
		count = 0;

		for (j = 0; j < size; j++) {
			sum = sum + b[j];
			count++;

			if (sum >= x) {
				break;
			}
		}
		
		if (j == size) {
			a[i] = 0;
			continue;
		}

		a[i] = count;
	}

	for (i = 0; i < t; i++) {
		if (a[i] == 0) {
			cout << "Scenario #" << i + 1 <<":" << endl << "impossible" << endl << endl;
			continue;
		}

		cout << "Scenario #" << i + 1 <<":" << endl << a[i] << endl << endl;
	}

	return 0;
}
