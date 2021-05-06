/*************************************************************************
	> File Name: OJ-218.cpp
	> Author: 
	> Mail: 
	> Created Time: Tue 19 May 2020 11:28:42 AM CST
 ************************************************************************/
#include<iostream>
#include<algorithm>
using namespace std;

struct student {
    int h, num;
};

bool cmp (student a, student b) {
    if (a.h == b.h) return a.num < b.num;
    return a.h < b.h;
}

int main() {
    int n;
    cin >> n;
    student stu[100005];
    for (int i = 1; i <= n; i++) {
        cin >> stu[i].h;
        stu[i].num = i;
    }
    sort(stu + 1, stu + n + 1, cmp);
    for (int i = 1; i <= n; i++) {
        (i == 1) && cout << stu[i].num;
        (i != 1) && cout << " " << stu[i].num;
    }
    cout << endl;
    return 0;
}
