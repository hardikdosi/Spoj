#include <stdio.h>

int main()
{
    int x1[100], x2[100], x3[100];
    int i;
    int j;
    
    for (i = 0;; i++) {
        scanf("%d %d %d", &x1[i], &x2[i], &x3[i]);
        
        if (!(x1[i] || x2[i] || x3[i])) {
               break;
        }
    }
    
    for (j = 0; j < i; j++) {
        if (right(x1[j], x2[j], x3[j]) == 1) {
                         printf("right\n");
        } else {
               printf("wrong\n");
        }
    }
         
    return 0;
}    
                       
int right(int s1, int s2, int s3)
{
    if (s1 * s1 == s2 * s2 + s3 * s3) {
           return 1;
    }
    
    if (s2 * s2 == s1 * s1 + s3 * s3) {
           return 1;
    }
    
    if (s3 * s3 == s1 * s1 + s2 * s2) {
           return 1;
    }
    
    return -1;
}
