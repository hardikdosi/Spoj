#include <cstdio>
#include <math.h>

using namespace std;

int main()
{
    int t, i;
    double ans, p0, p1, T, p;

    scanf("%d", &t);

    i = 1;
    while (t--) {
        scanf("%lf %lf %lf %lf", &p0, &p1, &T, &p);

        ans = T * log(p / p0) / log(p1 / p0);

        printf("Scenario #%d: %.2lf\n", i++, ans);
    }

    return 0;
}
