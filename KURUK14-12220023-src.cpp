#include <iostream>
#include <vector>
#include <cstdio>

using namespace std;

int main()
{
    int t, n;
    scanf("%d", &t);

    while (t--) {
        int flag = 0, x;
        scanf("%d", &n);

        vector <int> f(n, 0);

        for (int i = 0; i < n; i++) {
            scanf("%d", &x);

            if (x > n - 1)
                flag = 1;
            else if (f[x] == 0)
                f[x] = 1;
            else if (f[n - x - 1] == 0)
                f[n - x - 1] = 1;
            else
                flag = 1;
        }

        if (flag == 1)
            printf("NO\n");
        else
            printf("YES\n");
    }

    return 0;
}
