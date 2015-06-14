#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>

using namespace std;

bool isalpha(char x)
{
    if ((x>='a' && x<='z') || (x>='A' && x<='Z'))
        return true;
    else
        return false;
}

bool validCpp(string &s)
{
    if (s[0] == '_'|| s[s.size()-1] == '_')
        return false;

    for (int i=0; i<s.size()-1; i++) {
        if (s[i] == '_' && s[i+1] == '_')
            return false;
    }

	for (int i=0; i<s.size(); i++) {
        if (!isalpha(s[i]) && (s[i]!='_'))
            return false;

		if (isupper(s[i]))
			return false;
	}
	return true;
}

string toJava(string &s)
{
	string aux;

	for (int i=0; i<s.size(); i++) {
		if (s[i] == '_') {
			aux += toupper(s[i+1]);
			i++;
		} else
			aux += s[i];
	}

	return aux;
}

string toCpp(string &s)
{
	string aux;
	for (int i=0; i<s.size(); i++) {
		if (isupper(s[i])) {
			aux += "_";
			aux += tolower(s[i]);
		} else
			aux += s[i];
	}

	return aux;
}

int main()
{
	string s;
	while (cin >> s) {
		int flag = 0;
		for (int i=0; i<s.size(); i++) {
			if (s[i] == '_') {
				flag=1;
				break;
			}
		}
		if (flag == 1) {
			if (validCpp(s))
				cout << toJava(s) << endl;
			else
				cout << "Error!" << endl;
		} else if (islower(s[0]))
			cout << toCpp(s) << endl;
		else
			cout << "Error!" << endl;

		s.clear();
	}

	return 0;
}
