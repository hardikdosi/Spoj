#include <stdio.h>

int main()
{
    int t, i;
    unsigned long long r;
    
    scanf("%d", &t);
    
    double a[t];
    
    for (i = 0; i < t; i++) {
        scanf("%llu", &r);
        
        a[i] = 4 * r * r + 0.25;
    }
    
    for (i = 0; i < t; i++) {
        printf("Case %d: %.2lf\n",i + 1, a[i]);
    }
    
    return 0;
} 
