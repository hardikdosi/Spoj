#include <stdio.h>

int main()
{
    int n, i, q, r, flag, sum;
    int k = 0;
    int b[1000];    
    
    while (1) {
          scanf("%d", &n);
          
          if (n == -1) {
                break;
          }
          
          int a[n];
          
          sum = 0;
          
          for (i = 0; i < n; i++) {
              scanf("%d", &a[i]);
              sum = sum + a[i];
          }
          
          r = sum % n;
          q = sum / n;
          
          flag = 0;
          
          if (r == 0) {
                for (i = 0; i < n; i++) {
                    if (a[i] < q) {
                             flag = flag + q - a[i];
                    }
                }
          } else {
                 flag = -1;
          }
          
          b[k++] = flag;
    }
    
    for (i = 0; i < k; i++) {
        printf("%d\n", b[i]);
    }
    
    return 0;
}
