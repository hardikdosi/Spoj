#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int t;
    scanf("%d", &t);

    double n;
    while (t--) {
        scanf("%lf", &n);

        double a = 3 * n * n + 9 * n + 4, b = 4 * (n + 1) * (n + 2);

        printf("%.11lf\n", a / b);
    }

    return 0;
}
