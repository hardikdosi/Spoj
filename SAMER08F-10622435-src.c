#include <stdio.h>

int main() 
{
    int i;
    int n;
    int size;
    int a[100];
    
    for (i = 0;; i++) {
        scanf("%d", &a[i]);
        
        if (!a[i]) {
           break;
        }        
    }
    
    size = i;
    
    for (i = 0; i < size; i++) {
        n = a[i];
        printf("%u\n", n * (n + 1) * (2 * n + 1)/6);
    }            
    
    return 0;
}
