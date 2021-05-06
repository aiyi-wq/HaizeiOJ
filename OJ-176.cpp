/*************************************************************************
	> File Name: OJ-176.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun 24 May 2020 08:54:34 PM CST
 ************************************************************************/
#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

int main() {
    char s1[1005], s2[1005];
    gets(s1);
    gets(s2);
    int ans = 0;
    int l1 = strlen(s1), l2 = strlen(s2);
    for (int i = 0; i <= l1 - l2; i++) {
        if (strncmp(s2, &s1[i], l2) == 0) {
            ans++;//strncmp(s, c, l), 比较s 和 存放字符c 的数组的长度为l的字符串的大小
        }
    }
    cout << ans << endl;
    return 0;
}
