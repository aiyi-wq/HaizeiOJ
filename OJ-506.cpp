/*************************************************************************
	> File Name: OJ-506.cpp
	> Author: 
	> Mail: 
	> Created Time: Tue 16 Jun 2020 11:42:04 AM CST
 ************************************************************************/

#include<iostream>
#include<algorithm>
using namespace std;

struct stu {
    int num, time;
};

bool cmp(stu a, stu b) {
    return a.time < b.time;
}

int main() {
    int n;
    cin >> n;
    stu str[35];
    for (int i = 0; i < n; i++) {
        cin >> str[i].time;
        str[i].num = i + 1;
    }
    sort(str, str + n, cmp);
    double sum = 0, cmp = 0;
    for (int i = 0; i < n; i++) {
        (i != 0) && cout << " " << str[i].num;
        (i == 0) && cout << str[0].num;
        sum += cmp;
        cmp += str[i].time;
    }
    cout << endl;
    printf("%.2lf\n", sum / n);
    return 0;
}
