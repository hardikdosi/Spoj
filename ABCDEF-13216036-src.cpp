#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

typedef long long ll;

int main()
{
    int n;
    scanf("%d", &n);
    vector<int> a(n), lhs, rhs;

    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                lhs.push_back(a[i]*a[j]+a[k]);
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                if (a[k]==0) continue;
                rhs.push_back(a[k]*(a[i]+a[j]));
            }
        }
    }

    sort(lhs.begin(), lhs.end());
    sort(rhs.begin(), rhs.end());

    long long cnt = 0LL;

    for (int i = 0; i < lhs.size(); i++) {
        cnt += upper_bound(rhs.begin(), rhs.end(), lhs[i]) - lower_bound(rhs.begin(), rhs.end(), lhs[i]);
    }

    printf("%lld\n", cnt);

    return 0;
}
