#include <stdio.h>

int reverse(int);

int main()
{
        int t;
        int a;
        int b;
        int i;

        scanf("%d", &t);

        int c[t];

        for (i = 0; i < t; i++) {
                scanf("%d", &a);
                scanf("%d", &b);

                c[i] = reverse(a) + reverse(b);
        }

        for (i = 0; i < t; i++) {
                printf("%d\n", reverse(c[i]));
        }
        
        return 0;
}

int reverse(int a)
{
        int r;
        int s = 0;

        while (a > 0) {
                r = a % 10;
                a = a / 10;
                s = s * 10 + r;
        }

        return s;
}
