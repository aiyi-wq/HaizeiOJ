/*************************************************************************
	> File Name: OJ-56-1.cpp
	> Author: 
	> Mail: 
	> Created Time: Tue 02 Jun 2020 07:13:31 PM CST
 ************************************************************************/
#include<iostream>
#include<algorithm>
using namespace std;
#define max_n 10

int num[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};

int main() {
    int x, y, cnt = 1;
    cin >> x >> y;
    do {
        cnt++;
        next_permutation(num, num + x);
    } while (cnt < y);
    for (int i = 0; i < x; i++) {
        cout << num[i];
    }
    cout << endl;
    return 0;
}
