#include <iostream>
#include <string>
#include <cstdio>
#include <vector>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);

    vector <int> v(n);

    for (int i = 0; i < n; i++)
        scanf("%d", &v[i]);

    int i, j = 0;
    string s;
    while (1) {
        cin >> s;

        if (s == "-1")
            break;

        for (int k = 0; k < s.size(); k++) {
            s[k] = (int)s[k] - 97;
        }

        i = 0;
        while (i < s.size() && j < n) {
            int z = (int)s[i] + v[j];

            if (z > 25)
                s[i] = z % 26;
            else
                s[i] = z;

            if (j + 1 >= n)
                j = -1;

            j++;
            i++;
        }

        for (int i = 0; i < s.size(); i++)
            printf("%c", (int)s[i] + 97);

        printf("\n");
    }

    return 0;
}
