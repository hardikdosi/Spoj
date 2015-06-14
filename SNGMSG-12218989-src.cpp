#include <iostream>
#include <cstdio>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int t;
    scanf("%d", &t);

    string key, msg;

    while (t--) {
        cin >> key >> msg;

        int i = 0, j = 0;

        while (i < msg.size()) {
            if (j < 0) j = 0;

            int tmp = msg[i] - (key[j] - '0');

            if (tmp < 97)
                printf("%c", 26 + tmp);
            else
                printf("%c", tmp);

            i++; j++;

            if (j >= key.size()) {
                j--;
                while (j >= 0 && i < msg.size()) {
                    int x = msg[i] - (key[j] - '0');

                    if (x < 97)
                        printf("%c", x + 26);
                    else
                        printf("%c", x);

                    i++; j--;
                }
            }
        }
        printf("\n");
    }

    return 0;
}
