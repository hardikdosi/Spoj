#include <cstdio>

using namespace std;

int main()
{
    int x, y;

    while (1) {
        scanf("%d", &x);

        if (x == 0)
            break;

        y = (x * (x + 1) / 2) + (x + 1) * (x + 1);

        printf("%d\n", y);
    }

    return 0;
}
