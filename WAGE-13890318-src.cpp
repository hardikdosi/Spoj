#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <string>
#include <map>
#include <utility>

#define mp(x, y) make_pair(x, y)
#define MAX 105

using namespace std;

map<pair<char, char>, char> m;
char a[MAX][MAX];
char b[MAX][MAX];

int main()
{
	m[mp('W','A')] = 'W';
	m[mp('A','G')] = 'A';
	m[mp('G','W')] = 'G';
	m[mp('A','W')] = 'W';
	m[mp('G','A')] = 'A';
	m[mp('W','G')] = 'G';
	m[mp('A','A')] = 'A';
	m[mp('G','G')] = 'G';
	m[mp('W','W')] = 'W';

	int t;
	scanf("%d", &t);

	while (t--) {
		int r, c, n;
		scanf("%d %d %d", &r, &c, &n);

		string s;
		for (int i=1; i<=r; i++) {
			cin >> s;	
			for (int j=1; j<=c; j++) {
				a[i][j] = s[j-1];
			}
		}

		while (n--) {
			for (int i=1; i<=c; i++)
				a[0][i] = a[1][i];
			for (int i=1; i<=c; i++)
				a[r+1][i] = a[r][i];
			for (int i=1; i<=r; i++)
				a[i][0] = a[i][1];
			for (int i=1; i<=r; i++)
				a[i][c+1] = a[i][c]; 

			for (int i=1; i<=r; i++) {
				for (int j=1; j<=c; j++) {
					b[i][j] = a[i][j];
					char aux[4];
					aux[0]=a[i-1][j];
					aux[1]=a[i][j-1];
					aux[2]=a[i][j+1];
					aux[3]=a[i+1][j];
					for (int k=1; k<=4; k++) {
						if (m[mp(a[i][j], aux[k-1])] != a[i][j]) {
							b[i][j]=aux[k-1];
							break;
						}
					}
				}
			}

			for (int i=1; i<=r; i++) {
				for (int j=1; j<=c; j++) {
					a[i][j] = b[i][j];
				}
			}
		}

		for (int i=1; i<=r; i++) {
			for (int j=1; j<=c; j++) {
				printf("%c", a[i][j]);
			}
			printf("\n");
		}
	}

	return 0;
}