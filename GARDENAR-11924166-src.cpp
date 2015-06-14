#include <cmath>
#include <iomanip>
#include <cstdio>

using namespace std;

int main()
{
    float s, a, b, c;

    int t;
    scanf("%d", &t);

    while (t--) {
        scanf("%f %f %f", &a, &b, &c);

        s = (a + b + c) / 2;

        float x = s * (s - a) * (s - b) * (s - c);
        float y = a * a + b * b + c * c;
        float z = sqrt(3) / 4;

        float ans = (z * y + 3 * sqrt(x)) / 2;

        printf("%.2f\n", ans);
    }

    return 0;
}
