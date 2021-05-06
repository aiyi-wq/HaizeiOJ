/*************************************************************************
	> File Name: OJ-504.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon 15 Jun 2020 06:59:35 PM CST
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;

int main() {
    int n;
    string str;
    cin >> str >> n;
    for (int i = n; i > 0; i--) {
        int ind = str.size() - 1;
        for (int j = 0; i < str.size() - 1; j++) {
            if (str[j] > str[j + 1]) {
                ind = j;
                break;
            }
        }
        str.replace(ind, 1, "");
    }
    int flag = 1;
    for (int i = 0; i < str.size(); i++) {
        if (str[i] != '0') flag = 0;
        if (!flag) cout << str[i];
    }
    cout << endl;
    return 0;
}
