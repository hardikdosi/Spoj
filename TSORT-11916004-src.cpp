#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int t, x;

    scanf("%d", &t);

    vector<int> a;

    for (int i = 0; i < t; i++) {
        scanf("%d", &x);
        a.push_back(x);
    }

    sort(a.begin(), a.end());

    for (int i = 0; i < t; i++) {
        printf("%d\n", a[i]);
    }

    return 0;
}
