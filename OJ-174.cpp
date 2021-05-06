/*************************************************************************
	> File Name: OJ-174.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun 24 May 2020 08:55:02 PM CST
 ************************************************************************/
#include<iostream>
#include<cstdio>
using namespace std;

char str1[100005] = {0};
char str2[300005] = {0};

int main() {
    gets(str1);
    for (int i = 0, j = 0; str1[i]; i++) {//j作为数组2的计时器
        if (str1[i] != ' ') {
            str2[j] = str1[i];
            j++;
        } else {
            str2[j] = '%';
            str2[j + 1] = '2';
            str2[j + 2] = '0';
            j += 3//向后滚动3个字符再比较
        }
    }
    cout << str2 << endl;
    return 0;
}
