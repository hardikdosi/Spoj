#include <stdio.h>

int main()
{
    int n;
    int i;
    int j;
    char b[81];
       
    scanf("%d", &n);
    
    int num[n];
    char a[n][81];
    
    for (i = 0; i < n; i++) {
        scanf("%d %s", &num[i], &a[i]);
    }
    
    for (i = 0; i < n; i++) {
        
        for (j = 0; a[i][j] != '\0'; j++) {
            if (j >= num[i] - 1) {
                  b[j] = a[i][j + 1];
                  continue;
            }            
            b[j] = a[i][j];
        }
        
        b[j] = '\0';
        
        printf("%d %s\n", i + 1, b);
    }
    
    return 0;
}
