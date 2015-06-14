#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>

using namespace std;

int main()
{
    char str1[10050], str2[10050];
    int a[130], b[130];

    while (scanf("%s\n%s", str1, str2) != EOF) {
        memset(a, 0, sizeof(a));
        memset(b, 0, sizeof(b));

        int tmp;
        for (int i = 0; i < strlen(str1); i++) {
            tmp = (int)str1[i];
            a[tmp] += 1;
        }

        for (int i = 0; i < strlen(str2); i++) {
            tmp = (int)str2[i];
            b[tmp] += 1;
        }

        for (int i = 0; i < 130; i++) {
            if (a[i] - b[i] >= 0) {
                for (int j = 0; j < b[i]; j++)
                    printf("%c", i);
            } else if (a[i] - b[i] < 0) {
                for (int j = 0; j < a[i]; j++)
                    printf("%c", i);
            }
        }
        printf("\n");
    }

    return 0;
}
