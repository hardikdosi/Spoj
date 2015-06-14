#include <algorithm>
#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

int C(int a, int b, int c);

int main()
{
    int f1, f2, f3, t, m, n;

    scanf("%d", &t);

    int l = 1;
    while (t--) {
        f1 = f2 = f3 = 0;
        scanf("%d %d", &m, &n);
        vector<vector<int> > a(m, vector<int> (n));
        vector<int> x(m);

        for (int i = 0; i < m; i++) {
            int s = 0;
            for (int j = 0; j < n; j++) {
                scanf("%d", &a[i][j]);
                s += a[i][j];
            }
            x[i] = s;
        }

        int cnt = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (a[j][i] == 1) {
                    cnt++;
                    break;
                }
            }
        }
        if (cnt == n)
            f1 = 1;

        if (*min_element(x.begin(), x.end()) != 0)
            f2 = 1;

        if (*max_element(x.begin(), x.end()) < n)
            f3 = 1;

        printf("Case %d: %d\n", l++, C(f1, f2, f3));
    }

    return 0;
}

int C(int a, int b, int c)
{
    if (a == 0 && b == 0 && c == 0)
        return 0;
    else if (a == 0 && b == 0 && c == 1)
        return 1;
    else if (a == 0 && b == 1 && c == 0)
        return 2;
    else if (a == 0 && b == 1 && c == 1)
        return 3;
    else if (a == 1 && b == 0 && c == 0)
        return 4;
    else if (a == 1 && b == 0 && c == 1)
        return 5;
    else if (a == 1 && b == 1 && c == 0)
        return 6;
    else if (a == 1 && b == 1 && c == 1)
        return 7;
}
