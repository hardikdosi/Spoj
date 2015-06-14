#include <cstdio>
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    while (1) {
        int g, b;
        scanf("%d %d", &g, &b);

        if (g == -1 && b == -1)
            break;

        if (g > b) {
            double x = (double)g/(b+1);
            printf("%d\n", (int)ceil(x));
        } else {
            double x = double(b) / (g+1);
            printf("%d\n", (int)ceil(x));
        }
    }

    return 0;
}
