#include <cstdlib>
#include <iostream>
 
using namespace std;

int main()
{
	int i = 0, j, b[100];
	string x;
	
	while(1) {

		getline(cin, x);

		if (x == "  ")
			break;
		if (x == "qp" || x == "pq" || x == "bd" || x == "db") 
			b[i++] = 1;
		else	 
			b[i++] = 0;
	}

	cout << "Ready\n";

	for (j = 0; j < i; j++) {
		if (b[j] == 1) {
			cout << "Mirrored pair\n";
		} else {
			cout << "Ordinary pair\n";
		}
	}
	
	return 0;
}
