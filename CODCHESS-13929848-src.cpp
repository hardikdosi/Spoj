#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int t, n;
    scanf("%d", &t);

    while (t--) {
        scanf("%d", &n);

        if (n&1)
            printf("0\n");
        else
            printf("1\n");
    }

    return 0;
}
