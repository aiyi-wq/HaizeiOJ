/*************************************************************************
	> File Name: OJ-445.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri 22 May 2020 04:18:09 PM CST
 ************************************************************************/
#include<iostream>
using namespace std;

int num[1005] = {0};

int main() {
    int N;
    int cnt1, cnt2, cnt3 = 0;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> num[i];
    }
    for (int i = 0; i < N; i++) {
        cnt1 = cnt2 = 0;
        for (int j = 0; j < i; j++) {
            if (num[i] < num[j]) cnt1++; 
        }
        for (int j = i + 1; j < N; j++) {
            if (num[i] < num [j]) cnt2++;
        }
        if (cnt1 == cnt2) cnt3++;
    }
    cout << cnt3 << endl;
    return 0;
}
