#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    scanf("%d", &t);

    while (t--) {
        int a, b;
        scanf("%d %d", &a, &b);

        if ((a&1) && (b&1))
            printf("Ramesh\n");
        else
            printf("Suresh\n");
    }

    return 0;
}
