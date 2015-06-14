#include <cstdio>

using namespace std;

int main()
{
    int x;

    scanf("%d", &x);

    if (x % 10 == 0)
        printf("%d", 2);
    else
        printf("%d\n%d", 1, x % 10);

    return 0;
}
