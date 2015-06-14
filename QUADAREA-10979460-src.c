#include <stdio.h>
#include <math.h>

int main()
{
	int t, i;
	double a, b, c, d, s;

	scanf("%d", &t);

	double ans[t];

	for (i = 0; i < t; i++) {
		scanf("%lf %lf %lf %lf", &a, &b, &c, &d);

		s = (a + b + c + d) / 2;

		ans[i] = sqrt(s - a) * sqrt(s - b) * sqrt(s - c) * sqrt(s - d);
	}

	for (i = 0; i < t; i++) {
		printf("%.2lf\n", ans[i]);
	}

	return 0;
}