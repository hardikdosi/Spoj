#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    int i;
    
    scanf("%d", &t);
    
    float a[t];
    char unit[t][3];
    
    for (i = 0; i < t; i++) {
        scanf("%f %s", &a[i], &unit[i]);
    }
    
    for (i = 0; i < t; i++) {
        if (strcmp(unit[i], "kg") == 0) {
           printf("%d %.4f %s\n", i + 1, a[i] * 2.2046, "lb");
        }
        
        if (strcmp(unit[i], "lb") == 0) {
           printf("%d %.4f %s\n", i + 1, a[i] * 0.4536, "kg");
        }
        
        if (strcmp(unit[i], "l") == 0) {
           printf("%d %.4f %s\n", i + 1, a[i] * 0.2642, "g");
        }
        
        if (strcmp(unit[i], "g") == 0) {
           printf("%d %.4f %s\n", i + 1, a[i] * 3.7854, "l");
        }
    }
    
    return 0;
}         
