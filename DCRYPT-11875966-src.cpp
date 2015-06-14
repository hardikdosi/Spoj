#include <iostream>
#include <cstdio>
#include <string>
#include <cctype>

using namespace std;

int get_index(char x);

int main()
{
    int t, key;
    string str, alph = "abcdefghijklmnopqrstuvwxyz";

    scanf("%d", &t);

    while (t--) {
        scanf("%d", &key);

        cin >> str;

        for (int i = 0; i < str.size(); i++) {
            if (str[i] == '.') {
                printf(" ");
            } else if (key < 26) {
                int tmp = (get_index(str[i]) + key) % 26;

                if (isupper(str[i]))
                    printf("%c", toupper(alph[tmp]));
                else
                    printf("%c", tolower(alph[tmp]));
            } else {
                int tmp = (get_index(str[i]) + key) % 26;

                if (isupper(str[i]))
                    printf("%c", tolower(alph[tmp]));
                else
                    printf("%c", toupper(alph[tmp]));
            }
        }
        printf("\n");
    }

    return 0;
}

int get_index(char x)
{
    if (x >= 'a' && x <= 'z')
        return (int)x - 97;
    else if (x >= 'A' && x <= 'Z')
        return (int)x - 65;
}
