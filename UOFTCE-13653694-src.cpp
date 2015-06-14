#include <iostream>
#include <cstdio>
#include <vector>
#include <queue>
#include <algorithm>
#include <string>
#include <cstring>

#define MAX 105

bool isVisited[MAX][MAX];
int m, n;
struct node {
	char c;
	int x, y, dist;
};
node cell[MAX][MAX];

using namespace std;

bool isValid(int, int);
int bfs(node);

int main()
{
	int t, begin_x, begin_y;
	scanf("%d", &t);

	for (int i=0; i<MAX; i++) {
		for (int j=0; j<MAX; j++) {
			cell[i][j].x = i;
			cell[i][j].y = j;	
		}
	}

	while (t--) {
		vector<int> pos;
		scanf("%d %d", &m, &n);
		vector<string> v(m);

		for (int i = 0; i < m; i++) {
			cin >> v[i];
		}
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				cell[i][j].c = v[i][j];
				if (v[i][j] == 'C') {
					begin_x = i;
					begin_y = j;
				}
			}
		}
		
		memset(isVisited, 0, sizeof(isVisited));
		bfs(cell[begin_x][begin_y]);

		for (int i=0; i<m; i++) {
			for (int j=0; j<n; j++) {
				if (cell[i][j].c == 'S') {
					pos.push_back(cell[i][j].dist);
				}
			}
		}

		sort(pos.begin(), pos.end());
		int ans = 0;
		ans += pos[pos.size()-1] + 60;
		for (int i = 0; i<pos.size()-1; i++)
			ans += 2*pos[i] + 60;

		printf("%d\n", ans);
	}
	return 0;
}

int bfs(node v)
{
	queue<node> q;

	cell[v.x][v.y].dist = 0;
	v.dist = 0;
	q.push(v);
	while (!q.empty()) {
		node u = q.front(); q.pop();

		if (!isVisited[u.x][u.y]) {
			isVisited[u.x][u.y] = true;

			if (u.c == '#')
				continue;

			if (isValid(u.x+1, u.y) && !isVisited[u.x+1][u.y]) {
				cell[u.x+1][u.y].dist = u.dist+1;		
				q.push(cell[u.x+1][u.y]);
			}
			if (isValid(u.x-1, u.y) && !isVisited[u.x-1][u.y]) {
				cell[u.x-1][u.y].dist = u.dist+1;
				q.push(cell[u.x-1][u.y]);
			}
			if (isValid(u.x, u.y+1) && !isVisited[u.x][u.y+1]) {
				cell[u.x][u.y+1].dist = u.dist+1;
				q.push(cell[u.x][u.y+1]);
			}
			if (isValid(u.x, u.y-1) && !isVisited[u.x][u.y-1]) {
				cell[u.x][u.y-1].dist = u.dist+1;
				q.push(cell[u.x][u.y-1]);
			}
		}
	}
}

bool isValid(int x, int y)
{
	if (x<0 || x>=m || y<0 || y>=n)
		return false;
	return true;
}