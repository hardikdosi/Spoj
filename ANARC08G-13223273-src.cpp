#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

int main()
{
    int test = 1;
    while (true) {
        int n;
        scanf("%d", &n);
        if (!n)
            break;

        vector<vector<int> > v(n, vector<int>(n));
        vector<int> give(n, 0), take(n, 0);

        int presum = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++){
                scanf("%d", &v[i][j]);
                presum += v[i][j];
                give[i] += v[i][j];
                take[j] += v[i][j];
            }
        }

        int ans = 0;
        for (int i = 0; i < n; i++) {
            if (give[i]-take[i]>0)
                ans+=give[i]-take[i];
        }
        printf("%d. %d %d\n", test++, presum, ans);
    }

    return 0;
}
