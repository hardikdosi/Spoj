#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int t, n, num;
    scanf("%d", &t);

    while (t--) {
        int flag = 0;
        scanf("%d", &n);

        for (int i = 0; i < n; i++) {
            scanf("%d", &num);

            if (num > i)
                flag = 1;
        }

        if (flag == 1)
            printf("NO\n");
        else
            printf("YES\n");
    }

    return 0;
}
