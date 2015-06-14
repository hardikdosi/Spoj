#include <iostream>
#include <cstdio>
#include <map>

using namespace std;

int main()
{
    int t, n, r, flag;
    scanf("%d", &t);

    int x, y, k = 1;

    while (t--) {
        flag = 0;
        map<int, int> m;
        map <int, int> :: iterator it;

        scanf("%d %d", &n, &r);

        for (int i = 0; i < r; i++) {
            scanf("%d %d", &x, &y);

            for (it = m.find(y); it != m.end(); it++) {
                if (it -> first != y)
                    break;

                if (it -> first == y && m[y] == x)
                    flag = 1;
            }

            m[y] = x;
        }

        if (flag == 1)
            printf("Scenario #%d: impossible\n", k++);
        else
            printf("Scenario #%d: possible\n", k++);
    }

    return 0;
}
