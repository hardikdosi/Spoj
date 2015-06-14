#include <stdio.h>

int main()
{
    int n;
    int i;
    int j;
    int k;
    int temp;
    int num;
    
    scanf("%d", &n);
    
    int sum[n];
    
    for (i = 0; i < n; i++) {
        
        scanf("%d", &num);
        
        int a[num];
        int b[num];
        
        for (j = 0; j < num; j++) {
            scanf("%d", &a[j]);
        }
        
        for (j = 0; j < num - 1; j++) {
            for (k = j + 1; k < num; k++) {
                if (a[j] < a[k]) {
                   temp = a[j];
                   a[j] = a[k];
                   a[k] = temp;
                }
            }
        }
        
        for (j = 0; j < num; j++) {
            scanf("%d", &b[j]);
        }
        
        for (j = 0; j < num - 1; j++) {
            for (k = j + 1; k < num; k++) {
                if (b[j] < b[k]) {
                   temp = b[j];
                   b[j] = b[k];
                   b[k] = temp;
                }
            }
        }
        
        sum[i] = 0;
        
        for (j = 0; j < num; j++) {
            sum[i] = sum[i] + a[j] * b[j];
        }
    }
    
    for (i = 0; i < n; i++) {
        printf("%d\n", sum[i]);
    }
    
    return 0;
}
