#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>

using namespace std;

string reverse(string x)
{
	int i = 0;
	int j = x.size()-1;

	while (i<j) {
		swap(x[i], x[j]);
		i++;
		j--;
	}
	
	return x;
}

int main()
{
	int t;
	string s;

	scanf("%d", &t);

	while (t--) {
		cin >> s;
		
		int flag = 0;
		for (int i=0; i<s.size(); i++) {
			for (int j=2; j<=s.size()-i; j++) {
				if (s.find(reverse(s.substr(i, j))) == string::npos) {
					flag = 1;
					break;
				}
			}
		}

		if (flag)
			printf("NO\n");
		else
			printf("YES\n");
	}

	return 0;
}