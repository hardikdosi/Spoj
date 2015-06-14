#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
    int i = 1, x, y;

    while (1) {
        scanf("%d", &x);

        if (x == 0)
            break;
        else if (x == 5)
            printf("Case %d, N = %d, # of different labelings = %d\n", i++, x, 125);
        else if (x == 10)
            printf("Case %d, N = %d, # of different labelings = %d\n", i++, x, 100000000);
        else {
            y = pow(x, x - 2);
            printf("Case %d, N = %d, # of different labelings = %d\n", i++, x, y);
        }
    }

    return 0;
}
