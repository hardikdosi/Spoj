#include <iostream>

using namespace std;

int main()
{
	int t, g, mg, powG, powMG;

	cin >> t;

	int result[t];

	for (int i = 0; i < t; i++) {
		cout << "\n";

		cin >> g >> mg;

		int a[g], b[mg];

		for (int j = 0; j < g; j++) cin >> a[j];
		for (int j = 0; j < mg; j++) cin >> b[j];

		powG = a[0];
		for (int j = 1; j < g; j++) {
            if (a[j] > powG) powG = a[j];
		}

		powMG = b[0];
		for (int j = 1; j < mg; j++) {
            if (b[j] > powMG) powMG = b[j];
		}

		if (powG >= powMG) {
            result[i] = 1;
		} else if (powMG > powG) {
            result[i] = 0;
		} else {
            result[i] = -1;
		}
	}

	for (int i = 0; i < t; i++) {
        if (result[i] == 0) cout << "MechaGodzilla" << endl;
        else if (result[i] == 1) cout << "Godzilla" << endl;
        else cout << "uncertain" << endl;
	}

	return 0;
}
