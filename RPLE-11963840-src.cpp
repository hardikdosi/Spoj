#include <iostream>
#include <map>
#include <cstdio>
#include <algorithm>
#include <cstring>

using namespace std;

int main()
{
    int t, x, y, u, v, k = 1;

    scanf("%d", &t);

    while (t--) {
        map<int, int> map1;
        map<int, int>::iterator it;

        scanf("%d %d", &x, &y);

        int a[x];
        memset(a, 0, sizeof(a));

        for (int i = 0; i < y; i++) {
            scanf("%d %d", &u, &v);
            map1[u] = v;
            a[v] = 1;
        }

        int cnt = 0;

        for (int i = 0; i < x; i++) {
            if (a[i] == 1) {
                it = map1.find(i);

                if (it != map1.end()) {
                    printf("Scenario #%d: spied\n", k++);
                    break;
                } else cnt++;
            }
        }

        if (cnt == count(a, a+x, 1))
            printf("Scenario #%d: spying\n", k++);
    }
}
