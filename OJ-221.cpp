/*************************************************************************
	> File Name: OJ-221.cpp
	> Author: 
	> Mail: 
	> Created Time: Tue 19 May 2020 01:52:15 PM CST
 ************************************************************************/
#include<iostream>
#include<algorithm>
using namespace std;

struct student {
    int num, h, ans;
};

int hei[100005] = {0};

int cmp(int a, int b) {
    return a < b;
}

bool cmp1(student a, student b) {
    return a.h < b.h;
}

bool cmp2(student a, student b) {
    return a.num < b.num;
}

int main() {
    int n, m;
    cin >> n >> m;
    student stu[100005];
    for (int i = 1; i <= n; i++) {
        cin >> stu[i].h;
        stu[i].num = i;
        stu[i].ans = 0;
    }
    sort(stu + 1, stu + n + 1, cmp1);
    for (int i = 1; i <= m; i++) {
        cin >> hei[i];
    }
    sort(hei + 1, hei + m + 1, cmp);
    int index = 1;
    for (int i = 1; i <= n; i++) {
        while (stu[i].h >= hei[index] && index <= m) {
            stu[i].ans++;
            index++;
        }
    }
    sort(stu + 1, stu + n + 1, cmp2);
    for (int i = 1; i <= n; i++) {
        cout << stu[i].ans << endl;
    }
    return 0;
}
