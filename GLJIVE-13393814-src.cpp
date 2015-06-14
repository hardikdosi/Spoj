#include <iostream>
#include <cstdio>

using namespace std;

int mod(int x)
{
    if (x<0)
        return -x;
    return x;
}

int main()
{
    int a[10];
    for (int i=0; i<10; i++) {
        scanf("%d", &a[i]);
    }

    int sum=0, i=0, ss;
    while (sum<100 && i<10) {
        ss = sum;
        sum += a[i];
        i++;
    }

    if (mod(100-ss) == mod(sum-100)) {
        printf("%d", sum);
    } else if (mod(100-ss) > mod(sum-100))
        printf("%d", sum);
    else
        printf ("%d", ss);

    return 0;
}
