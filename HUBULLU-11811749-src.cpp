#include <cstdio>

using namespace std;

int main()
{
    int t, x, y;

    scanf("%d", &t);

    while (t--) {
        scanf("%d %d", &x, &y);

        if (y == 0)
            printf("Airborne wins.\n");
        else
            printf("Pagfloyd wins.\n");
    }

    return 0;
}
