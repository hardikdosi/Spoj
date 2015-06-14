#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    vector<int> a(n), b(n), c(n), d(n);

    for (int i=0; i<n; i++) {
        scanf("%d %d %d %d", &a[i], &b[i], &c[i], &d[i]);
    }

    vector<int> ab;
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            ab.push_back(a[i]+b[j]);
        }
    }
    sort(ab.begin(), ab.end());

    vector<int> cd;
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            cd.push_back(c[i]+d[j]);
        }
    }
    sort(cd.begin(), cd.end());

    int cnt = 0;
    for (int i=0; i<ab.size(); i++) {
        cnt += upper_bound(cd.begin(), cd.end(), -ab[i]) - lower_bound(cd.begin(), cd.end(), -ab[i]);
    }

    printf("%d\n", cnt);

    return 0;
}
