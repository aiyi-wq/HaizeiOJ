/*************************************************************************
	> File Name: OJ-145.cpp
	> Author: 
	> Mail: 
	> Created Time: Tue 19 May 2020 03:51:31 PM CST
 ************************************************************************/
#include<iostream>
#include<cstring>
using namespace std;

int main() {
    int N, maxlen = 0;
    char str1[105], str2[105];
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> str1;
        if (strlen(str1) > maxlen) {
            maxlen = strlen(str1);
            strcpy(str2, str1);
        }
    }
    cout << str2 << endl;
    return 0;
}
