#include <iostream>
#include <cstdio>
#include <vector>
#include <string>
#include <cstring>

#define MAX 5010

using namespace std;

typedef long long ll;

ll dp[MAX];

ll calculate(vector<int>& v)
{
	memset(dp, 0, sizeof(dp));
	dp[0] = 1;

	for (int i=1; i<v.size(); i++) {
		if (v[i] != 0)
			dp[i] = dp[i-1];

		if (v[i-1] == 0)
			continue;

		if ((v[i] + v[i-1]*10) < 27 && (v[i]+v[i-1]*10>=1)) {
			if (i-2>=0)
				dp[i] += dp[i-2];
			else
				dp[i] += 1;
		}
	}

	return dp[v.size()-1];
}

int main()
{
	string s;
	while (true) {
		cin >> s;
		if (s == "0")
			break;
		vector<int> v;
		for (int i=0; i<s.size(); i++)
			v.push_back(s[i]-'0');
		printf("%lld\n", calculate(v));
	}

	return 0;
}