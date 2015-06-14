#include <iostream>
#include <map>
#include <string>
#include <cstdio>
#include <cstring>
#include <climits>

using namespace std;

int main()
{
	int t;
	scanf("%d", &t);

	while (t--) {
		int n;
		scanf("%d", &n);

		cin.clear();
		
		map<string, int> m;

		for (int i = 0; i < n+1; i++) {
			char s[40];
			string str;
						
			fgets(s, 40, stdin);

			if(strcmp(s, "\n") == 0)
				continue;

			for (int j = 0; s[j+1] != '\0'; j++)
				str.push_back(s[j]);

			//str.pop_back();
			
			map<string, int>::iterator f = m.find(str);
			if(f != m.end()) {
				f -> second = f -> second + 1;
			} else {
				m.insert(make_pair(str, 1));
			}
		}

		for (map<string, int>::iterator i = m.begin(); i != m.end(); i++) {
			cout << i->first << " " << i->second << endl;
		}
		printf("\n");
	}

	return 0;
}
