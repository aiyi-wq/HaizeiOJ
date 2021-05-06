/*************************************************************************
	> File Name: OJ-504-1.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu 22 Oct 2020 06:05:30 PM CST
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;
//排序

int main() {
    string str;
    int s;  //删除数的数量
    cin >> str >> s;
    for (int i = 0; i < s; ++i) {
        int ind = str.size() - 1;
        for (int j = 0; j < str.size() - 1; ++j)  {
            if (str[j] > str[j + 1]) {
                ind = j;
                break;
            }
        }
        str.replace(ind, 1, "");
    }
    int flag = 0;
    for (int i = 0; i < str.size(); ++i) {
        if (str[i] != '0') flag = 1;
        if (flag) cout << str[i];
    }
    if (!flag) cout << 0;
    cout << endl;
    return 0;
}
