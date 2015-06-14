#include <string>
#include <iostream>
#include <cstdio>

using namespace std;

int stoi(string s);

int main()
{
	string s1, s2, s3;
	char op1, op2;
	int n1, n2, n3, t;

	scanf("%d", &t);

	while (t--) {
		cout << "\n";
		cin >> s1 >> op1 >> s2 >> op2 >> s3;
		
		if (s1.find("machula") != string::npos) {
			n2 = stoi(s2);
			n3 = stoi(s3);
			n1 = n3 - n2;
			
			cout << n1 << " + " << n2 << " = " << n3 << "\n";
		} else if (s2.find("machula") != string::npos) {
			n1 = stoi(s1);
			n3 = stoi(s3);
			n2 = n3 - n1;

			cout << n1 << " + " << n2 << " = " << n3 << "\n";
		} else {
			n1 = stoi(s1);
			n2 = stoi(s2);
			n3 = n1 + n2;

			cout << n1 << " + " << n2 << " = " << n3 << "\n";
		}
	}

	return 0;
}				

int stoi(string s)
{
	int x = 0;
	for (int i = 0; i < s.size(); i++) {
		x = x * 10 + (s[i] - '0');
	}

	return x;
}
