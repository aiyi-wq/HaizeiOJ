/*************************************************************************
	> File Name: OJ-240.cpp
	> Author: 
	> Mail: 
	> Created Time: Tue 11 Aug 2020 06:07:00 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

char ans[5000][5000];
int num[10] = {0, 1};

void func(int x, int y, int n) {
    if (n == 1) {
        ans[x][y] = 'X';
        return ;
    }
    //左上角
    func(x, y, n - 1);
    //右上角
    func(x, y + num[n] / 3 * 2, n - 1);
    //左下角
    func(x + num[n] / 3 * 2, y, n - 1);
    //右下角
    func(x + num[n] / 3 * 2, y + num[n] / 3 * 2, n - 1);
    //中间
    func(x + num[n] / 3, y + num[n] / 3, n - 1);
}

int main() {
    for (int i = 2; i <= 7; i++) {
        num[i] = num[i - 1] * 3;
    }
    func(1, 1, 7);
    int n;
    while (cin >> n) {
        if (n == -1) {
            break;
        }
        for (int i = 1; i <= num[n]; i++) {
            for (int j = 1; j <= num[n]; j++) {
                if (ans[i][j] =='X') {
                    cout << 'X';
                } else {
                    cout << " ";
                }
            }
            cout << endl;
        }
        cout << '-' << endl;
    }
    return 0;
}
