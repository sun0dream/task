#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>

int main() {
	system("color 0a");
	char a[100][100] = {
		"###########",//[0][0]---[6][10]
		"##      ###",
		"##O###    #",
		"# S O   O #",
		"# **#  O ##",
		"##**#    ##",
		"###########",
	};
	int i, x = 3, y = 2;/*n[4][2]={"2,2","3,4","3,8","4,7",};//[0][0]--[3][1]
	int m[4][2]={"4,2","4,3","5,2","5,3"};//[0][0]--[3][1]*/
	for (i = 0; i <= 6; i++) {
		puts(a[i]);
	}
	char ch;
	int q = 1, w = 1, e = 1, r = 1;

	while (q || w || e || r) {
		ch = getche();
		if (ch == 's') {
			if (a[x + 1][y] != '#' && a[x + 1][y] != 'O') {
				a[x][y] = ' ';
				x++;
				a[x][y] = 'S';
			} else if (a[x + 1][y] == 'O' && a[x + 2][y] == ' ') {
				a[x][y] = ' ';
				x++;
				a[x][y] = 'S';
				a[x + 1][y] = 'O';
			} else if (a[x + 1][y] == 'O' && a[x + 2][y] == '*') {
				a[x][y] = ' ';
				x++;
				a[x][y] = 'S';
				a[x + 1][y] = 'O';
			}
		}
		if (ch == 'w') {
			if (a[x - 1][y] != '#' && a[x - 1][y] != 'O') {
				a[x][y] = ' ';
				x--;
				a[x][y] = 'S';
			} else if (a[x - 1][y] == 'O' && a[x - 2][y] == ' ') {
				a[x][y] = ' ';
				x--;
				a[x][y] = 'S';
				a[x - 1][y] = 'O';
			} else if (a[x - 1][y] == 'O' && a[x - 2][y] == '*') {
				a[x][y] = ' ';
				x--;
				a[x][y] = 'S';
				a[x - 1][y] = 'O';
			}
		}
		if (ch == 'a') {
			if (a[x][y - 1] != '#' && a[x][y - 1] != 'O') {
				a[x][y] = ' ';
				y--;
				a[x][y] = 'S';
			} else if (a[x][y - 1] == 'O' && a[x][y - 2] == ' ') {
				a[x][y] = ' ';
				y--;
				a[x][y] = 'S';
				a[x][y - 1] = 'O';
			} else if (a[x][y - 1] == 'O' && a[x][y - 2] == '*') {
				a[x][y] = ' ';
				y--;
				a[x][y] = 'S';
				a[x][y - 1] = 'O';
			}
		}
		if (ch == 'd') {
			if (a[x][y + 1] != '#' && a[x][y + 1] != 'O') {
				a[x][y] = ' ';
				y++;
				a[x][y] = 'S';
			} else if (a[x][y + 1] == 'O' && a[x][y + 2] == ' ') {
				a[x][y] = ' ';
				y++;
				a[x][y] = 'S';
				a[x][y + 1] = 'O';
			} else if (a[x][y + 1] == 'O' && a[x][y + 2] == '*') {
				a[x][y] = ' ';
				y++;
				a[x][y] = 'S';
				a[x][y + 1] = 'O';
			}
		}
		system("cls");
		/*q=memcmp(n[0],m[0],sizeof(n[0]));
		w=memcmp(n[1],m[1],sizeof(n[1]));
		e=memcmp(n[2],m[2],sizeof(n[2]));
		r=memcmp(n[3],m[3],sizeof(n[3]));*/
		for (i = 0; i <= 6; i++) {
			puts(a[i]);
		}
	}
	return 0;
}
