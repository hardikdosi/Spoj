#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

int main()
{
    int t, n;
    scanf("%d", &t);

    while (t--) {
        int flag = 0;
        scanf("%d", &n);

        vector<int> a(n), b(n);

        for (int i = 0; i < n; i++)
            scanf("%d %d", &a[i], &b[i]);

        int max = a[0], l = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] > max) {
                max = a[i];
                l = i;
            }
        }

        for (int i = 0; i < n; i++) {
            if (i != l && b[i] >= max) {
                flag = 1;
                break;
            }
        }

        if (flag == 1)
            printf("-1\n");
        else
            printf("%d\n", l + 1);
    }

    return 0;
}
