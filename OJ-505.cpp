/*************************************************************************
	> File Name: OJ-505.cpp
	> Author: 
	> Mail: 
	> Created Time: Tue 16 Jun 2020 11:32:39 AM CST
 ************************************************************************/

#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

bool cmp(string a, string b) {
    return a + b > b + a;
}

string str[100005];

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> str[i];
    }
    sort(str, str + n, cmp);
    for (int i = 0; i < n; i++) {
        cout << str[i];
    }
    cout << endl;
    return 0;
}
