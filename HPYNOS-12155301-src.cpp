#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

bool found(vector <int> v, int x);
int digit_sum(long long x);
int hpyno(long long x);

int main()
{
    long long n;
    scanf("%lld", &n);

    printf("%d", hpyno(n));

    return 0;
}

int hpyno(long long x)
{
    vector <int> v;
    int cnt = 1;
    int tmp = digit_sum(x);

    while (tmp != 1) {
        cnt++;
        v.push_back(tmp);
        tmp = digit_sum(tmp);

        if (found(v, tmp)) {
            return -1;
        }
    }

    if (tmp == 1)
        return cnt;
}

int digit_sum(long long x)
{
    int sum = 0;
    while (x > 0) {
        sum += ((x % 10) * (x % 10));
        x /= 10;
    }

    return sum;
}

bool found(vector <int> v, int x)
{
    for (int i = 0; i < v.size(); i++) {
        if (v[i] == x)
            return true;
    }

    return false;
}
