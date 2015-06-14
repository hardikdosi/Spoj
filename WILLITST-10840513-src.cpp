#include <iostream>
#include <math.h>

using namespace std;

int check(unsigned long long  n)
{
	unsigned long long x = 1;
	int i = 1, flag = 0;

	while (x < n) {
		x = pow(2, i);
		i++;

		if (x == n) {
			flag = 1;
			break;
		}
	}

	return flag;
}

int main()
{
	unsigned long long n, x = 1;
	int count, i;

	cin >> n;

	if (n < 1) {
		cout << "TAK" << endl;
		return 0;
	}

	count = check(n);

	if (count == 1) {
		cout << "TAK" << endl;
		return 0;
	}

	if (count == 0) {
		count = check(3 * n + 3);
	}

	if (count == 1) {
		cout << "TAK" << endl;
	} else {
		cout << "NIE" << endl;
	}

	return 0;
}
