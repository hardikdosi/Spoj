#include <cmath>
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double s, a, b, c;

    int t;
    cin >> t;

    while (t--) {
        cin >> a >> b >> c;

        s = (a + b + c) / 2;

        double x = s * (s - a) * (s - b) * (s - c);
        double y = a * a + b * b + c * c;
        double z = sqrt(3) / 4;

        double ans = (z * y + 3 * sqrt(x)) / 2;

        cout << setprecision(2) << fixed << ans << endl;
    }

    return 0;
}
