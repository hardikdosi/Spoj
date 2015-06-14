
#include <bits/stdc++.h>

using namespace std;

#define lb      lower_bound
#define ub      upper_bound
#define pb      push_back
#define pf      push_front
#define mp      make_pair
#define gcd     __gcd
#define all(x)  x.begin(), x.end()
#define S(x)    scanf("%d", &x)
#define Sl(x)   scanf("%lld", &x)
#define P(x)    printf("%d", x)
#define Pl(x)   printf("%lld", x)
#define PS(x)   printf("%s", x)
#define MOD     1000000007LL

typedef long long       ll;
typedef vector<int>     vi;
typedef vector<vi>      vvi;
typedef pair<int, int>  ii;
typedef vector<ii>      vii;
template<class T> T abs(T x)
{
    return x > 0 ? x : -x;
}

int main()
{
    int n, t;
    S(n);
    S(t);
    map<int, int> m;

    int flag=0;
    while (t--) {
        int x, y;
        S(x);
        S(y);
        if (m.find(y) != m.end())
            flag=1;
        else {
            m[y] = x;
            m[x] = y;
        }
    }

    if (flag)
        PS("NO\n");
    else
        PS("YES\n");

    return 0;
}
