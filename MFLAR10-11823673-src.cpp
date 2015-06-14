#include <cstdio>
#include <cstring>
#include <cctype>

using namespace std;

void eval(char a[]);

int main()
{
    char a[1500];

    while (1) {
        gets(a);

        if (!strcmp(a, "*"))
            break;

        eval(a);
    }

    return 0;
}

void eval(char a[])
{
    char ch;
    int flag;

    ch = a[0];

    if (isupper(ch))
        flag = 1;
    else
        flag = 0;

    for (int i = 0; i < strlen(a); i++) {
        if (a[i] == ' ') {
            if (flag == 1) {
                if (a[i+1] != ch && a[i+1] != tolower(ch)) {
                    printf("N\n");
                    return;
                }
            } else if (a[i+1] != ch && a[i+1] != toupper(ch)) {
                    printf("N\n");
                    return;
            }
        }
    }

    printf("Y\n");
    return;
}
