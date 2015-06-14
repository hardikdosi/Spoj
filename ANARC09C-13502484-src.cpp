#include <iostream>
#include <cstdio>
#include <map>
#include <set>

using namespace std;

int abs(int x)
{
	if (x<0)
		return -x;
	return x;
}

int main()
{
	int tt=1;
	while (true) {
		int a, b;
		map<int, int> ma, mb;
		set<int> s;

		scanf("%d %d", &a, &b);

		if (a==0 && b==0)
			break;

		for (int i=2; i*i<=a; i++) {
			if (a%i == 0) {
				s.insert(i);
				while (a%i == 0) {
					ma[i] += 1;
					a = a/i;
				}
			}
		}
		if (a>1) {
			s.insert(a);
			ma[a] += 1;
		}

	
		for (int i=2; i*i<=b; i++){
			if (b%i == 0) {
				s.insert(i);
				while (b%i == 0) {
					mb[i] += 1;
					b = b/i;
				}
			}
		}
		if (b>1) {
			s.insert(b);
			mb[b] += 1;
		}

		int cnt = 0;
		set<int>::iterator it;
		map<int, int>::iterator p1, p2;
		for (it=s.begin(); it!=s.end(); it++) {
			p1=ma.find(*it);
			p2=mb.find(*it);
			if (p1 != ma.end() && p2 != mb.end()) {
				cnt += abs(p1->second - p2->second);
			} else if (p1 == ma.end() && p2 != mb.end()) {
				cnt +=	p2->second;
			} else if (p1 != ma.end() && p2 == mb.end()) {
				cnt += p1->second;
			}
		}
		printf("%d. %d:%d\n", tt++, s.size(), cnt);
	}
	return 0;
}