#include <iostream>
#include <cstdio>
#include <map>

using namespace std;

map<int, int> m;

void factor(int x)
{
	for (int i=2; i*i<=x; i++) {
		while (x%i == 0) {
			m[i] += 1;
			x = x/i;
		}
	}
	if (x>1)
		m[x] += 1;
}

int main()
{
	int n;
	scanf("%d", &n);

	while (n>1) {
		factor(n);
		n--;
	}

	map<int, int>::iterator i = m.begin();
	while (true) {
		cout << i->first << "^" << i->second;
		i++;
		if (i == m.end())
			break;
		cout << " * ";
	}
	printf("\n");
	return 0;
}