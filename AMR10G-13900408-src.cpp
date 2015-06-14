#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>

#define inf 1000000020

using namespace std;

int main()
{
    int t;
    scanf("%d", &t);

    while (t--) {
        int n, k;
        scanf("%d %d", &n, &k);

        vector<int> v(n);
        for (int i=0; i<n; i++)
            scanf("%d", &v[i]);

        sort(v.begin(), v.end());

        int i=0, j=k-1, mmin = inf;
        while (j<n) {
            mmin = min(mmin, v[j]-v[i]);
            i++;
            j++;
        }

        printf("%d\n", mmin);
    }

    return 0;
}
