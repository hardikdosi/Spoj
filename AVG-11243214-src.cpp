#include <iostream>

using namespace std;

int main()
{
    int t, sum, num;

    cin >> t;

    int ans[t];

    for (int i = 0; i < t; i++) {
        cin >> num;

        int a[num];

        sum = 0;
        for (int j = 0; j < num; j++) {
            cin >> a[j];
            sum = sum + a[j];
        }

        ans[i] = sum / num;
    }

    for (int i = 0; i < t; i++) {
        cout << ans[i] << endl;
    }

    return 0;
}
