#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>

#define MAX 25

using namespace std;

int f[MAX];
int s[MAX];

int main()
{
	int w, d;

	while (true) {
		memset(f, 0, sizeof(f));
		memset(s, 0, sizeof(s));

		scanf("%d %d", &w, &d);

		if (w==0 && d==0)
			break;
	
		int x;
		for (int i=0; i<w; i++) {
			scanf("%d", &x);
			f[x] += 1;
		}
	
		for (int i=0; i<d; i++) {
			scanf("%d", &x);
			s[x] += 1;
		}

		int cost=0;
		for (int i=0; i<MAX; i++) {
			if (f[i] == s[i]) {	
				cost += f[i]*i;
			} else {
				cost += max(f[i], s[i]) * i;
			}
		}

		printf("%d\n", cost);
	}

	return 0;
}