#include <cstdio>

using namespace std;

long long GCD(long long, long long);

int main()
{
    long long a, b;

    while (1) {
        scanf("%lld %lld", &a, &b);

        if (a == 0 && b == 0)
            break;

        if (a == b)
            printf("1\n");
        else if (a > b){
            if (a % b == 0)
                printf("%lld\n", a / b);
            else {
                long long lcm = (b * a) / GCD(a, b);
                printf("%lld\n", lcm);
            }
        } else {
            if (b % a == 0)
                printf("%lld\n", b / a);
            else {
                long long lcm = (b * a) / GCD(a, b);
                printf("%lld\n", lcm);
            }
        }
    }

    return 0;
}

long long GCD(long long m, long long n)
{
    long long r = 1;

    while (r > 0) {
        r = n % m;
        n = m;
        m = r;
    }

    return n;
}
