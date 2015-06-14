#include <stdio.h>
#include <math.h>

int main()
{
	int i, j, k, size1, size2, n, t;
	long long min;

	scanf("%d", &t);

	long long ans[t];

	for (i = 0; i < t; i++) {
		scanf("%d", &size1);

		long long a[size1];

		for (j = 0; j < size1; j++) {
			scanf("%ld", &a[j]);
		}

		scanf("%d", &size2);

		long long b[size2];

		for (j = 0; j < size2; j++) {
			scanf("%ld", &b[j]);
		}
		
		min = abs(a[0] - b[0]);

		if (size1 < size2) {
			for (j = 0; j < size1; j++) {
				for (k = 0; k < size2; k++) {
					if (abs(a[j] - b[k]) < min) {
						min = abs(a[j] - b[k]);
					}
				}
			}
		} else {
			for (j = 0; j < size2; j++) {
				for (k = 0; k < size1; k++) {
					if (abs(a[k] - b[j]) < min) {
						min = abs(a[k] - b[j]);
					}
				}
			}
		}

		ans[i] = min;
	}

	for (i = 0; i < t; i++) {
		printf("%ld\n", ans[i]);
	}

	return 0;
}
