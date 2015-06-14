#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

int main()
{
    int t;
    scanf("%d", &t);

    while (t--) {
        int n, m, d;
        vector<int> v;

        scanf("%d %d %d", &n, &m, &d);

        for (int i = 0; i < n; i++) {
            int x;
            scanf("%d", &x);
            v.push_back(x);
        }

        int cnt = 0, flag = 0;
        for (int i = 0; i < n; i++) {
            if (v[i] > d && v[i] % d > 0)
                cnt += v[i] / d;

            if (cnt >= m) {
                flag = 1;
                break;
            }
        }

        if (flag == 1)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
