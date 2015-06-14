#include <iostream>
#include <limits.h>

using namespace std;

int main()
{
	int s1, s2, mina, mind, secmind, i, j = 0;
	char ans[200];
	
	cin >> s1 >> s2;
	
	while (s1 && s2) {
		int a[s1], d[s2];
				
		for (i = 0; i < s1; i++) {
			cin >> a[i];
		}

		for (i = 0; i < s2; i++) {
			cin >> d[i];
		}

		mina = a[0];
		for (i = 0; i < s1; i++) {
			if (a[i] < mina) {
				mina = a[i];
			}
		}
		
		mind = secmind = INT_MAX;
		for (i = 0; i < s2; i++) {
			if (d[i] <= mind) {
				secmind = mind;
				mind = d[i];
			} else if (d[i] < secmind && d[i] != mind) {
				secmind = d[i];
			}
		}

		if (mina < secmind) {
			ans[j++] = 'Y';
		} else {
			ans[j++] = 'N';
		}

		cin >> s1 >> s2;
	}

	for (i = 0 ; i < j; i++) {
		cout << ans[i] << endl;
	}
	
	return 0;
}