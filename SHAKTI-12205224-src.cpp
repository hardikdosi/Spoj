#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int t, n;
    scanf("%d", &t);

    while (t--) {
        scanf("%d", &n);

        if (n & 1)
            printf("Sorry Shaktiman\n");
        else
            printf("Thankyou Shaktiman\n");
    }

    return 0;
}
