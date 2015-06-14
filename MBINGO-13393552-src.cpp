#include <iostream>
#include <set>
#include <cstdio>
#include <vector>
#include <cstring>

int a[95];

using namespace std;

int main()
{
    int n, b;

    while (true) {
        memset(a, 0, sizeof(a));
        scanf("%d %d", &n, &b);
        if (n==0 && b==0)
            break;
        vector<int> v(b);
        for (int i=0; i<b; i++) {
            scanf("%d", &v[i]);
        }
        int tmp;
        for (int i=0; i<b; i++) {
            for (int j=i; j<b; j++) {
                (v[i]-v[j]>0) ? tmp=v[i]-v[j] : tmp=v[j]-v[i];
                if (tmp>=0 && tmp<95)
                    a[tmp]=1;
            }
        }
        int cnt=0;
        for (int i=0; i<=n; i++){
            if (a[i])
                cnt++;
        }
        if (cnt==n+1)
            printf("Y\n");
        else
            printf("N\n");
    }
    return 0;
}
