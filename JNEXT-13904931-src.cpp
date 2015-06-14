#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>

#define MAX 1000010

using namespace std;

int a[MAX];

int main()
{
    int t, n;
    scanf("%d", &t);

    while (t--) {
        int flag = 0;
        scanf("%d", &n);

        for (int i=0; i<n; i++) {
            scanf("%d", &a[i]);
        }

        int i=n-1;
        while (a[i-1]>=a[i]) {
            i--;
        }

        if (i==0)
            flag = 1;

        sort(a+i, a+n);

        int j=i;
        while (j<n && a[j]<=a[i-1]) {
            j++;
        }
        swap(a[j],a[i-1]);

        if (flag == 1) {
            printf("-1");
        } else {
            for (int k=0; k<n; k++)
                printf("%d", a[k]);
        }
        printf("\n");
    }

    return 0;
}
