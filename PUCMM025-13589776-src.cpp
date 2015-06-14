#include <iostream>
#include <cstdio>
#include <string>
#include <map>
#include <vector>

using namespace std;

typedef long long ll;

bool check_divisibility(string& s, int x)
{
	int last = s[s.size()-1]-'0';
	if (x==0)
		return false;
	else if (x==1)
		return true;
	else if (x==2) {
		if (last%2==0)
			return true;
		else 
			return false;
	} else if (x == 3) {
		int sum = 0;
		for (int i=0; i<s.size(); i++) {
			sum += s[i]-'0';
		}
		if (sum%3 == 0)
			return true;
		else 
			return false;
	} else if (x == 4) {
		int num = last;
		num = num + (s[s.size()-2]-'0')*10;
		if (num % 4 == 0)
			return true;
		else 
			return false;
	} else if (x == 5) {
		if (last==0 || last==5)
			return true;
		else 
			return false;
	} else if (x == 6) {
		if (last%2==0) {
			int sum=0;
			for (int i=0; i<s.size(); i++) 
				sum += s[i]-'0';
			if (sum % 3 == 0)
				return true;
			else 
				return false;
		} else 
			return false;
	} else if (x == 7) {
		vector<int> v;
		v.push_back(1);
		v.push_back(3);
		v.push_back(2);
		v.push_back(6);
		v.push_back(4);
		v.push_back(5);
		ll ans=0;
		int j=0;
		for (int i=s.size()-1; i>=0; i--){
			int el = s[i]-'0';
			ans = ans + (ll)(el *  v[j]);
			j=(j+1)%6;
		}
		if (ans%7 == 0)
			return true;
		else 
			return false;
	} else if (x == 8) {
		int num = last;	
		num += (s[s.size()-2]-'0')*10 + (s[s.size()-3]-'0')*100;
		if (num%8==0)
			return true;
		else 
			return false;
	} else if (x == 9) {
		int sum=0;
		for (int i=0; i<s.size(); i++)
			sum += s[i]-'0';
		if (sum % 9 == 0)
			return true;
		else 
			return false;
	}
}

int main()
{
	string s;
	map<int, int> m;

	while (cin >> s) {
		m.clear();
		for (int i=0; i<s.size(); i++) {
			m[s[i]-'0'] += 1;
		}
		
		int ans=0;
		for (map<int,int>::iterator it=m.begin(); it != m.end(); it++) {
			if(check_divisibility(s, it->first))
				ans += it->second;
		}

		printf("%d\n", ans);
	}
	return 0;
}