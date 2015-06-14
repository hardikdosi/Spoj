
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

#define li list<int>::iterator

vector <list<int> > v;
vector <bool> isVisited;
vector <bool> inQueue;
vector <int> dist;

void bfs(int start)
{
        queue<int> q;
        q.push(start);
        while (!q.empty()) {
                int x = q.front(); q.pop();
                isVisited[x] = true;
                for (li it=v[x].begin(); it!=v[x].end(); it++) {
                        if (!inQueue[*it] && !isVisited[*it]) {
                                q.push(*it);
                                inQueue[*it] = true;
                                dist[*it] = dist[x] + 1;
                        }
                }
        }
}

int main()
{
        int n;
        S(n);

        v.resize(n);
        isVisited.resize(n, false);
        inQueue.resize(n, false);
        dist.resize(n, 0);

        int x, y;
        for (int i=0; i<n-1; i++) {
                S(x);S(y);
                v[x-1].push_front(y-1);
                v[y-1].push_front(x-1);
        }

        bfs(0);

        vi::iterator i = max_element(all(dist));
        int node = i-dist.begin();

        isVisited.clear();
        inQueue.clear();
        dist.clear();
        isVisited.resize(n, false);
        inQueue.resize(n, false);
        dist.resize(n, 0);

        bfs(node);

        P(*max_element(all(dist)));
        PS("\n");

        return 0;
}
