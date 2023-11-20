#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
#include <stdio.h>
#include <stdbool.h>
#include <math.h>

char maze[15][15];
int start[2];

int pos[2];
int dir = 0;
int step[4][2] = { {0,1}, {1,0}, {0,-1}, {-1,0} };

// index->  0       1     2      3
// dir  -> east , south, west, north
// step -> {0,1}, {1,0}, {0,-1}, {-1,0}

bool ThereHaveTwoFxckingHoles() {
	int exist = 0;
	for (int i = 0; i < 15; i++) 
		if (maze[i][0] == 'X') exist++;
		
	for (int i = 0; i < 15; i++) 
		if (maze[0][i] == 'X') exist++;
	
	for (int i = 0; i < 15; i++) 
		if (maze[14][i] == 'X') exist++;
	
	for (int i = 0; i < 15; i++) 
		if (maze[i][14] == 'X') exist++;
	
	if (exist == 1) return false;
	else return true;
}

bool Game() {
	 do {
		if (maze[pos[0] + step[dir + 1 <= 3 ? dir + 1 : 0][0]][pos[1] + step[dir + 1 <= 3 ? dir + 1 : 0][1]] == 'X') {
			dir = (dir + 1 <= 3) ? dir + 1 : 0;
			pos[0] += step[dir][0];
			pos[1] += step[dir][1];
		}
		else if (maze[pos[0] + step[dir][0]][pos[1] + step[dir][1]] == 'X') {
			pos[0] += step[dir][0];
			pos[1] += step[dir][1];
		}
		else if (maze[pos[0] + step[dir - 1 == -1 ? 3 : dir - 1][0]][pos[1] + step[dir - 1 == -1 ? 3 : dir - 1][1]] == 'X') {
			dir = (dir - 1 == -1) ? 3 : dir - 1;
			pos[0] += step[dir][0];
			pos[1] += step[dir][1];
		}
		else {
			if (dir % 2 == 0) dir = 2 - dir;
			else dir = 4 - dir;
			pos[0] += step[dir][0];
			pos[1] += step[dir][1];
		}

		if (start[0] == pos[0] && start[1] == pos[1]) return false;

	 } while (pos[0] != 0 && pos[0] != 14 && pos[1] != 0 && pos[1] != 14);

	return true;
}

bool isSolution() {
	for (int i = 0; i < 15; i++) {
		for (int j = 0; j< 15; j++) {
			scanf("%c", &maze[i][j]);
		}
		if(i != 14) scanf("\n");
	}

	// if (!ThereHaveTwoFxckingHoles()) return false;  這是bug 判斷兩個洞就會過了 = =
	// else return true;

	for (int i = 0; i < 15; i++) {
		if (maze[i][0] == 'X') {
			start[0] = pos[0] = i;
			start[1] = pos[1] = 0;
		}
	}

	return Game();
}

int main()
{
	if (isSolution()) printf("This maze has a solution");
	else printf("This maze has no solution");
	return 0;
}

/*
###############
#XXXXXXXXX#XXX#
#X#X#####X###X#
#X#X#XXXXXXX#X#
#X#######X###X#
#X#X#XXXXXXXXX#
###X###X#######
#XXXXXXX#X#XXX#
#X#######X#X###
XX#XXXXX#XXX#XX
#X#X###X#X#X#X#
#XXX#XXXXX#XXX#
#X#####X#####X#
#XXXXX#XXXXX#X#
###############

###############
#X#XXXXXXXXX#X#
#X#X#X###X#X#X#
#XXX#X#XXX#XXX#
#########X###X#
XXXXXXXXXXXX#X#
###X#######X###
#XXXXXXXXX#XXX#
#X#X#####X###X#
#X#X#XXXXXXX#X#
#X#######X###X#
#X#X#XXXXXXXXX#
###X###X#######
#XXX###XXXXXXX#
###############

*/