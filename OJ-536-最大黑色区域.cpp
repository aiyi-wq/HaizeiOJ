/*************************************************************************
	> File Name: OJ-397-dfs.cpp
	> Author: 
	> Mail: 
	> Created Time: Tue 18 Aug 2020 02:32:55 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

int dir[4][2] = {0, 1, 1, 0, 0, -1, -1, 0};
char mmap[105][105];
int n, m, ans = 0, tmp;

void func(int x, int y) {
    for (int i = 0; i < 4; i++) {
        int xx = x + dir[i][0];
        int yy = y + dir[i][1];
        if (mmap[xx][yy] == '1') {
            ++tmp;
            mmap[xx][yy] = '0';
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
            if (mmap[i][j] == '1') {
                mmap[i][j] = '0';
                tmp = 1;
                func(i, j);
                ans = max(ans, tmp);
                tmp = 0;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
