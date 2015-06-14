#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

int bsearch(vector<int>& v, int x)
{
    int low=0, high=v.size();
    while (low <= high) {
        int mid =(low+high)/2;
        if (v[mid]==x)
            return mid;
        else if (v[mid] > x) {
            high = mid-1;
        } else
            low = mid+1;
    }
    return -1;
}

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    vector<int> v(n), f(n, 0);
    for (int i=0; i<n; i++) {
        scanf("%d", &v[i]);
    }
    sort(v.begin(), v.end());
    int cnt=0;
    for (int i=0; i<n; i++) {
        int a1=v[i]+k, a2=v[i]-k;
        int index = bsearch(v, a1);
        if (index != -1 && f[index]==0) {
            cnt++;
        }
        index = bsearch(v, a2);
        if (index != -1 && f[index]==0) {
            cnt++;
        }
        f[i]=1;
    }
    printf("%d\n", cnt);
    return 0;
}
