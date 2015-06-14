#include <iostream>
#include <cstdio>
#include <algorithm>
#define MAX 300005

int a[MAX], p[MAX];

using namespace std;

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    for (int i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }
    p[0]=a[0];
    for (int i=1; i<n; i++) {
        p[i]=p[i-1]+a[i];
    }

    int maxsum=-1;
    for (int j=0; j<n; j++) {
        maxsum = max(maxsum, p[j] - *lower_bound(p, p+j, p[j]-m));
    }

    printf("%d\n", maxsum);
    return 0;
}
