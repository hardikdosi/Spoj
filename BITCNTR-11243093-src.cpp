#include <iostream>

using namespace std;

int main()
{
    int i, t, flag, num;

    cin >> t;

    int a[t];

    for (i = 0; i < t; i++) {
        cin >> num;

        flag = 0;
        while (num > 0) {
            if (num % 2 == 1) flag++;

            num = num / 2;
        }
        a[i] = flag;
    }

    for (i = 0; i < t; i++) {
        cout << a[i] << endl;
    }

    return 0;
}
