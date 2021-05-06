/*************************************************************************
	> File Name: OJ-217.cpp
	> Author: 
	> Mail: 
	> Created Time: Tue 19 May 2020 10:35:51 AM CST
 ************************************************************************/
#include<iostream>
#include<algorithm>
using namespace std;

int num[100005] = {0};

int cmp(int a, int b) {
    return a > b;
}

int main() {
    int n, m = 0; 
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }
    sort(num, num + n, cmp);
    for (int i = 0; i < n; i++) {
        if (num[i] >= num[n / 2]) m++;
    }
    printf("%d %d\n", num[n / 2], m);
    return 0;
}
