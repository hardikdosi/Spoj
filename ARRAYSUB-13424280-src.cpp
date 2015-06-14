#include <iostream>
#include <vector>
#include <cstdio>

using namespace std;

int main()
{
	int n, k;
	scanf("%d", &n);
	vector<int> v(n);

	for (int i=0; i<n; i++)
		scanf("%d", &v[i]);

	scanf("%d", &k);

	int low=0, high=k-1;
	int max=v[low];
	for (int i=low+1; i<=high; i++) {
		if (v[i]>max) {
			max=v[i];
		}
	}
	printf("%d ", max);

	while (high+1<n) {
		if (max == v[low]) {
			low++;
			high++;
			max=-1;
			for (int i=low; i<=high; i++) {
				if (v[i]>max)
					max=v[i];
			}
			printf("%d ", max);		
		} else if (max != v[low]) {
			if (max>v[high+1]) {
				printf("%d ", max);
				high++;
				low++;
			} else {
				printf("%d ", v[high+1]);
				max=v[high+1];
				high++;
				low++;
			}
		}
	}
	printf("\n");

	return 0;
}