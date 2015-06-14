#include <stdio.h>
 
int main()
{
	int n;
	int s;
	int k;
	int i;
 
	k = 0;
 
	scanf("%d", &n);
 
	int a[n];
 
	scanf("%d", &s);
 
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
 
	for (i = 0; i < n; i++) {
		if (a[i] % s == 0) {
			k++;
		}
	}
 
	printf("%d", k);
 
	return 0;
}