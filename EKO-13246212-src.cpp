#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>

using namespace std;

typedef long long ll;

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }

    sort(v.begin(), v.end());

    int lo = 0, hi = n-1, mid;
    while (true) {
        mid = (lo+hi)/2;

        if (lo == mid) {
            int x = v[mid], y = v[mid+1], prev = -1;

            while (true) {
                int z = (x + y) / 2;

                if (z == prev) {
                    printf("%d\n", z);
                    goto out;
                }
                prev = z;

                ll cnt = 0;
                for (int i = mid+1; i<v.size() && cnt<=m; i++) {
                    cnt += v[i] - z;
                }

                if (cnt == m) {
                    printf("%d\n", z);
                    goto out;
                } else if (cnt > m){
                    x = z;
                } else if (cnt < m){
                    y = z;
                }
            }
        } else if (hi == mid) {
            int x = v[mid - 1], y = v[mid], prev = -1;

            while (true) {
                int z = (x + y) / 2;

                if (z == prev) {
                    printf("%d\n", z);
                    goto out;
                }
                prev = z;

                ll cnt = 0;
                for (int i = mid; i<v.size() && cnt<=m; i++) {
                    cnt += v[i] - z;
                }

                if (cnt == m) {
                    printf("%d\n", z);
                    goto out;
                } else if (cnt > m){
                    x = z;
                } else if (cnt < m){
                    y = z;
                }
            }
        }

        ll cnt = 0;
        for (int i = mid; i < v.size(); i++) {
            cnt += v[i] - v[mid];
        }

        if (cnt == m) {
            printf("%d\n", v[mid]);
            break;
        } else if (cnt > m) {
            lo = mid;
        } else if (cnt < m) {
            hi = mid;
        }
    }
    out:;

    return 0;
}
