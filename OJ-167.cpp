/*************************************************************************
	> File Name: OJ-167.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun 24 May 2020 08:49:38 PM CST
 ************************************************************************/
#include<iostream>
#include<string>
using namespace std;

int main() {
    int l;
    string str1, str2;
    cin >> str1 >> l >> str2;
    cout << str1.size() << endl;
    cout << str1.find("a") + 1 << endl;
    str1 = str1.insert(l - 1, str2);
    cout << str1 << endl;
    return 0;
}
