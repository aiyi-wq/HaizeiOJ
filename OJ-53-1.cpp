/*************************************************************************
	> File Name: OJ-53-1.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu 28 May 2020 08:15:37 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;
#define max_n 1000000

int prime[max_n + 5] = {0};

void init() {
    for (int i = 1; i <= max_n ; i++) {
        prime[i] += i;
        for (int j = 2; j * i <= max_n; j++) {
            prime[i * j] += i;
        }
    }
}

int main() {
    init();
    int sum = 0;
    for (int i = 1; i <= max_n; i++) {
        if (prime[i] > sum) sum = prime[i];
    }
    cout << sum << endl;
    return 0;
}
