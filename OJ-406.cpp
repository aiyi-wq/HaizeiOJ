/*************************************************************************
	> File Name: OJ-397-dfs.cpp
	> Author: 
	> Mail: 
	> Created Time: Tue 18 Aug 2020 02:32:55 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

int dir[8][2] = {0, 1, 1, 0, 0, -1, -1, 0, 1, 1, -1, -1, -1, 1, 1, -1};
char mmap[2005][2005];
int n, m, ans = 0;

void func(int x, int y) {
    for (int i = 0; i < 8; i++) {
        int xx = x + dir[i][0];
        int yy = y + dir[i][1];
        if (mmap[xx][yy] == '#') {
            mmap[xx][yy] = '.';
            func(xx, yy);
        }
    }
}

int main() {
    cin >> n >>m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> mmap[i][j];
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (mmap[i][j] == '#') {
                ans++;
                mmap[i][j] = '.';
                func(i, j);
            }
        }
    }
    cout << ans << endl;
    return 0;
}
