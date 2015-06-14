#include <cmath>
#include<cstdio>

#define g 9.806

using namespace std;

int main()
{
    int t;
    scanf("%d", &t);

    int r, u, i;
    float x, y;

    i = 1;
    while (t--) {
        scanf("%d %d", &r, &u);

        x = (r * g) / (u * u);

        if (x > 1 || x < -1) {
            printf("Scenario #%d: %d\n", i++, -1);
        } else {
            y = 45 * asin(x) / acos(0.0);
            printf("Scenario #%d: %.2f\n", i++, y);
        }
    }

    return 0;
}
