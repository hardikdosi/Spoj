#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <fstream>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <climits>
#include <cctype>
#include <cassert>

using namespace std;

#define ull unsigned long long
#define ll long long
#define pii pair<int,int>
#define all(x) x.begin(),x.end()
#define pb(x) push_back(x)
#define F(i,a,n) for(long long i=(a);i<(n);++i)
#define FD(i,a,n) for(int i=(a);i>=(n);--i)
#define FE(it,x) for(it=x.begin();it!=x.end();++it)
#define V(x) vector < x >
#define S(x) scanf("%d",&x)
#define Sllu(x) scanf("%llu",&x)
#define Sll(x) scanf("%lld",&x)
#define M(x,i) memset(x,i,sizeof(x))
#define debug(i,sz,x) F(i,0,sz){cout<<x[i]<<" ";}cout<<endl
#define MAX(a,b) ((a)>(b)?(a):(b))
int ABS(int a) { if ( a < 0 ) return (-a); return a; }
#define fr first
#define se second
#define MOD 1000000007

int main()
{
    ll t, x, n, j = 1;
    ll ct;
    Sll(t);

    while (t--) {
        V(ll) a(1050, 0);
        ct = 0;
        Sll(x);
        Sll(n);
        V(ll) b(n);

        F(i, 0, n) {
            Sll(b[i]);
            a[b[i]] += 1;
        }

        F(i, 0, n) {
            a[b[i]] -= 1;
            ll tmp = x - b[i];

            if (tmp >= 0 && tmp <= 1000 && a[tmp])
                ct += a[tmp];
        }

        printf("%lld. %lld\n", j++, ct);
    }

    return 0;
}
