/*************************************************************************
	> File Name: OJ-530.cpp
	> Author: 
	> Mail: 
	> Created Time: Tue 13 Oct 2020 06:39:40 PM CST
 ************************************************************************/

#include<iostream>
#include<string.h>
#include<queue>
using namespace std;


int n, m, z, check[55][55];
char mmap[55][55];
int dir[4][2] = {-1, 0, 1, 0, 0, -1, 0, 1};

struct node {
    int x, y;
};

int main() {
    cin >> n >> m;
    queue<node> que;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++)  {
            cin >> mmap[i][j];
            if (mmap[i][j] == '*') {
                que.push((node){i, j});
                mmap[i][j]= '.';
            }
        }
    }
    cin >> z;
    while (z--) {
        char d[10];
        cin >> d;
        int dir_num, qsize = que.size();
        if (d[0] == 'N') {
            dir_num = 0;
        } else if (d[0] == 'S') {
            dir_num = 1;
        } else if (d[0] == 'W') {
            dir_num = 2;
        } else {
            dir_num = 3;
        }
        memset(check, 0, sizeof(check));
        for (int i = 0; i < qsize; i++) {
            node temp = que.front();
            que.pop();
            for (int j = 1; 1; j++) {
                int x = temp.x + j * dir[dir_num][0];
                int y = temp.y + j * dir[dir_num][1];
                if (mmap[x][y] != '.') {
                    break;
                }
                if (check[x][y] == 0) {
                    check[x][y] = 1;
                    que.push((node){x, y});
                }
            }
        }
    }
    while (!que.empty()) {
        node temp = que.front();
        que.pop();
        mmap[temp.x][temp.y] = '*';
    }
    for (int i = 1; i <= n; i++) {
        cout << &mmap[i][1] << endl;
    }
    return 0;
}
