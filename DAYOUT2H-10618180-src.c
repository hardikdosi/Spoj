#include <stdio.h>

int main()
{
    int n;
    int i;
    int j;
    int count;
    
    scanf("%d", &n);
    
    int a[n][2];
    
    for (i = 0; i < n; i++) {
        for (j = 0; j < 2; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < n; i++) {
        count = 0;
        
        for (j = a[i][0]; j <= a[i][1]; j++) {
            if (prime(j) == 1) {
               count++;
            }
        }
        
        printf("Case %d: %d\n", i + 1, count);
    }
    
    return 0;
}

int prime(int a)
{
    int i;
    
    if (a == 1) {
          return -1;
    }
    
    for (i = 2; i < a; i++) {
        if (a % i == 0) {
           return -1;
           break;
        }
    }
    
    return 1;
}
