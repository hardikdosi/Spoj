#include <stdio.h>

int main()
{
    int a, n, d, t, i;
    
    scanf("%d", &t);
    
    int tot[t];
    
    for (i = 0; i < t; i++) {
        scanf("%d %d %d", &n, &a, &d);
        
        tot[i] = (n * (2 * a + (n - 1) * d)) / 2;
    }
    
    for (i = 0; i < t; i++) {
        printf("%d\n", tot[i]);
    }
    
    return 0;
}
