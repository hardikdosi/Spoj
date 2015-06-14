#include <stdio.h>
#include <string.h>

int main()
{
	int col, row, i, j, k, l, m = 0;
	char b[220];
	char c[220][300];
	
	scanf("%d", &col);
	
	while (1) {
		if (col == 0) {
			break;
		}

		scanf("%s", b);

		row = strlen(b) / col;

		char a[row][col];

		k = 0;
		for (i = 0; i < row; i++) {
			for (j = 0; j < col; j++) {
				a[i][j] = b[k++];
			}
			
			i++;

			for (j = col - 1; j >= 0; j--) {
				a[i][j] = b[k++];
			}
		}

		l = 0;
		for (i = 0; i < col; i++) {
			for (j = 0; j < row; j++) {
				c[m][l++] = a[j][i];
			}
		}
		c[m][l] = '\0';
		m++;

		scanf("%d", &col);

	}

	for (i = 0; i < m; i++) {
		printf("%s\n", c[i]);
	}

	return 0;
}
