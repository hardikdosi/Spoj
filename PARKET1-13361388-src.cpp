#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
    int b, r, B, L;

    scanf("%d %d", &r, &b);

    int rt=sqrt(b);
    for (int i=1; i<=rt; i++) {
        if (b%i==0) {
            int rr = i*2;
            rr += (b/i)*2;
            rr += 4;
            if (rr == r) {
                L = i+2;
                B = b/i + 2;
                break;
            }
        }
    }

    (L>B) ? printf("%d %d", L, B) : printf("%d %d", B, L);

    return 0;
}
