#include <cmath>
#include<iostream>
#include <iomanip>

#define g 9.806

using namespace std;

int main()
{
    int t;
    cin >> t;

    int r, u, i;
    float x, y;

    i = 1;
    while (t--) {
        cin >> r >> u;

        x = (r * g) / (u * u);

        if (x > 1 || x < -1) {
            cout << "Scenario #" << i++ << ": -1" << endl;
            continue;
        }

        y = 45 * asin(x) / acos(0.0);

        cout << "Scenario #" << i++ << ": " << setprecision(2) << fixed << y << endl;
    }

    return 0;
}
