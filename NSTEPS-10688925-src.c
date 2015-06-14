#include <stdio.h>

int main() 
{
    int t, i, x, y;
    
    scanf("%d", &t);
    
    int num[t];
    
    for (i = 0; i < t; i++) {
        scanf("%d %d", &x, &y);
        
        if (y == x) {
              if (x % 2 == 0) {
                    num[i] = 2 * x;
              } else {
                     num[i] = 2 * x - 1;
              }
        } else if (y == x - 2) {
               if ((x % 2 == 0) && (y % 2 == 0)) {
                      num[i] = x + y;
               } else {
                      num[i] = x + y - 1;
               }
        } else {
               num[i] = -1;
        }
    }
    
    for (i = 0; i < t; i++) {
        if (num[i] == -1) {
                   printf("No Number\n");
                   continue;
        }
        
        printf("%d\n", num[i]);
    }
    
    return 0;
}
