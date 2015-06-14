#include <stdio.h>

int main()
{
    int t;
    int i;
    
    scanf("%d", &t);
    
    unsigned long long a[t];
    
    for (i = 0; i < t; i++) {
        scanf("%llu", &a[i]);
    }
    
    for (i = 0; i < t; i++) {        
        if (a[i] % 2 == 0) {
           printf("%llu\n", (a[i] * (a[i] + 2) * (2 * a[i] + 1)) / 8);
        } else {
           printf("%llu\n", (a[i] * (a[i] + 2) * (2 * a[i] + 1) - 1) / 8);
        }
    }
    
    return 0;
}
