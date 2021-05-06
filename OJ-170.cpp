/*************************************************************************
	> File Name: OJ-170.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat 23 May 2020 11:27:43 AM CST
 ************************************************************************/
#include<iostream>
#include<string>
using namespace std;

int main() {
    int n;
    cin >> n;
    string str[n + 5];
    for (int i = 0 ; i < n; i++) {
        cin >> str[i];
        while (str[i].find("Ban_smoking") != -1) {
            int pos = str[i].find("Ban_smoking");
            str[i].replace(pos, 11, "No_smoking");
        }
    }
    for (int i = 0; i < n; i++) {
        cout << str[i] << endl;
    }
    return 0;
}
