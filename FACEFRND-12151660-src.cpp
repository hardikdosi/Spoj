#include <iostream>
#include <set>
#include <cstdio>
#include <vector>

using namespace std;

int main()
{
    set <int> ff;
    vector <int> f;
    int t, num, n, tmp, cnt;
    scanf("%d", &t);

    while (t--) {
        scanf("%d", &num);
        f.push_back(num);

        scanf("%d", &n);
        for (int i = 0; i < n; i++) {
            scanf("%d", &tmp);
            ff.insert(tmp);
        }
    }

    cnt = ff.size();

    for (int i = 0; i < f.size(); i++) {
        if (ff.find(f[i]) != ff.end())
            cnt--;
    }

    printf("%d", cnt);

    return 0;
}
