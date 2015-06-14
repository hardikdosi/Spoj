#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    while (1) {
        int n, cnt = 0;
        scanf("%d", &n);

        if (n == 0)
            break;

        vector<int> v(n);
        for (int i = 0; i < n; i++)
            scanf("%d", &v[i]);

        sort(v.begin(), v.end());

        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                int tmp = v[i] + v[j];
                int x = upper_bound(v.begin(), v.end(), tmp) - v.begin();
                cnt += v.size() - x;
            }
        }

        printf("%d\n", cnt);
    }

    return 0;
}
