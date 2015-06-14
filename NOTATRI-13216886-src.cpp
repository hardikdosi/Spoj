#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;

    while (true) {
        scanf("%d", &n);
        if (n == 0)
            break;

        vector<int> v(n), sum;
        for (int i = 0; i < n; i++)
            scanf("%d", &v[i]);

        sort(v.begin(), v.end());
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                sum.push_back(v[i]+v[j]);
            }
        }

        int cnt = 0;
        for (int i = 0; i < sum.size(); i++) {
            cnt += v.end() - upper_bound(v.begin(), v.end(), sum[i]);
        }
        printf("%d\n", cnt);
    }

    return 0;
}
