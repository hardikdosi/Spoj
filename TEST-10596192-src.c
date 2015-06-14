#include <stdio.h>
 
int main()
{
	int a[500];
	int i;
 
	for (i = 0;; i++) {
		scanf("%d", &a[i]);
 
		if (a[i] == 42) {
			break;
		}
	}
 
	int n = i;
 
	for (i = 0; i < n; i++) {
		printf("%d\n", a[i]);
	}
 
	return 0;
}