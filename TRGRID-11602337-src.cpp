#include <iostream>

using namespace std;

int main()
{
    unsigned long t, n, m;

    cin >> t;

    char a[t];

    for (int i = 0; i < t; i++) {
        cin >> n >> m;

        if (n == m) {
            if (n % 2 == 0) a[i] = 'L';
            else a[i] = 'R';
        } else if (n > m) {
            if (n % 2 == 0 && m % 2 != 0) a[i] = 'D';
            else if (n % 2 != 0 && m % 2 == 0) a[i] = 'U';
            else if (n % 2 == 0 && m % 2 == 0) a[i] = 'U';
            else a[i] = 'D';
        } else {
            if (n % 2 == 0 && m % 2 != 0) a[i] = 'L';
            else if(n % 2 != 0 && m % 2 == 0) a[i] = 'R';
            else if (n % 2 == 0 && m % 2 == 0) a[i] = 'L';
            else a[i] = 'R';
        }
    }

    for (int i = 0; i < t; i++) cout << a[i] << endl;

    return 0;
}
