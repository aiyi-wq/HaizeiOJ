/*************************************************************************
	> File Name: OJ-149.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri 22 May 2020 02:16:04 PM CST
 ************************************************************************/
#include<iostream>
#include<string>
using namespace std;

int main() {
    string str;
    getline(cin, str);//读入第一行
    int i = str.length() - 1;//字符串里存了 '\0'，因此要减 1
    int ans = 0;
    for ( ; i > 0; --i) {
        if (str[i] == ' ') continue;
        else break;
    }
    while (str[i] != ' ' && i >= 0) {
        ++ans;
        --i;
    }
    cout << ans << endl;
    return 0;
}
