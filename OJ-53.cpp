/*************************************************************************
	> File Name: OJ-53.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu 28 May 2020 07:09:53 PM CST
 ************************************************************************/
#include<iostream>
using namespace std;
#define max_n 1000000

int prime[max_n + 5] = {0};
int num[max_n + 5] = {0};
int cnt[max_n + 5] = {0};

//素数筛与因子个数和定理
void init() {
    for (int i = 2; i <= max_n; i++) {
        if (!prime[i]) {
            prime[++prime[0]] = i;
            num[i] = i + 1;
            cnt[i] = i * i;
        }
        for (int j = 1; j <= prime[0]; j++) {
            if (prime[j] * i > max_n) break;
            prime[prime[j] * i] = 1;
            if (i % prime[j] == 0) {
                num[prime[j] * i] = num[i] / (cnt[i] - 1) * (cnt[i] * prime[j] - 1);
                cnt[prime[j] * i] = cnt[i] * prime[j];
                break;
            } else {
                num[prime[j] * i] = num[prime[j]] * num[i];
                cnt[prime[j] * i] = prime[j] * prime[j];
            }
        }
    }
    return ;
}

int main() {
    init();
    int sum = 0;
	for (int i = 2; i <= max_n; i++) {
        if (num[i] > sum) sum = num[i];
    }     
    cout << sum << endl;
    return 0;
}
