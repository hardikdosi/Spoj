#include <iostream>

using namespace std;

int main()
{
    int t, avg, sum = 0, freq = 0, i;

    cin >> t;

    int a[t];

    for (i = 0; i < t; i++) {
        cin >> a[i];
        sum = sum + a[i];
    }

    avg = sum / t;

    for (i = 0; i < t; i++) {
        if (a[i] < avg) {
            freq = freq + avg - a[i];
        }
    }

    cout << freq << endl;

    return 0;
}
