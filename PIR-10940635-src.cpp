#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
	int i, t;
	float u, v, w, U, V, W, x, y, z, X, Y, Z;
	double a, b, c, d;

	cin >> t;

	double vol[t];

	for (i = 0; i < t; i++) {
		cin >> U >> W >> v >> V >> w >> u;

		X = (w - U + v) * (U + v +w);
		x = (U - v + w) * (v - w + U);
		Y = (u - V + w) * (V + w + u);
		y = (V - w + u) * (w - u + V);
		Z = (v - W + u) * (W + u + v);
		z = (W - u + v) * (u - v + W);

		a = sqrt(x) * sqrt(Y) * sqrt(Z);
		b = sqrt(y) * sqrt(Z) * sqrt(X);
		c = sqrt(z) * sqrt(X) * sqrt(Y);
		d = sqrt(x) * sqrt(y) * sqrt(z);

		vol[i] = sqrt(-a + b + c + d) * sqrt(a - b + c + d) * sqrt(a + b - c + d) * sqrt(a + b + c - d) / (192 * u * v * w);
	}

	for (i = 0; i < t; i++) {
		cout << fixed << setprecision(4) << vol[i] << endl;
	}

	return 0;
}
