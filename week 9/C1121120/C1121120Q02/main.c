#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
#include <stdio.h>

/*
Have you ever played Minesweeper? It’s a cute little game which comes within a certain operating system which name we can’t really remember. Well, the goal of the game is to find where are all the mines within a M × N field. To help you, the game shows a number in a square which tells you how many mines there are adjacent to that square. For instance, suppose the following 4 × 4 field with 2 mines (which are represented by an '*' character):

The input will consist of an arbitrary number of fields. The first line of each field contains two integers n and m (0 < n, m ≤ 100) which stands for the number of lines and columns of the field respectively. The next n lines contains exactly m characters and represent the field.
Each safe square is represented by an '.' character (without the quotes) and each mine square is represented by an '*' character (also without the quotes). The first field line where n = m = 0 represents the end of input and should not be processed.

For each field, you must print the following message in a line alone:
Field #x:
Where x stands for the number of the field (starting from 1). The next n lines should contain the field with the '.' characters replaced by the number of adjacent mines to that square. There must be an empty line between field outputs.

input:
4 4
*...
....
.*..
....
3 5
**...
.....
.*...
0 0

output:
Field #1:
*100
2210
1*10
1110

Field #2:
**100
33200
1*100

*/


int m, n;
int number = 1;
char mat[101][101];
char ans[101][101];
int dir[8][2] = { {-1,-1},{-1,0},{-1,1},{0,-1},{0,1},{1,-1},{1,0},{1,1} };

// * bomb  . space
void solve() {
	scanf("\n");
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf("%c", &mat[i][j]);
		}
		scanf("\n");
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			
			int sum = 0;

			if (mat[i][j] == '*') ans[i][j] = '*';
			else {
				for (int k = 0; k < 8; k++) {
					int nx = i + dir[k][0], ny = j + dir[k][1];

					if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
					else if(mat[nx][ny] == '*') sum++;
				}
				ans[i][j] = sum + '0';
			}
		}
	}

	printf("Field #%d:\n", number++);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			printf("%c", ans[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

int main()
{
	while (scanf("%d %d", &n, &m) && m != 0 && n != 0) {
		solve();
	}
	return 0;
}