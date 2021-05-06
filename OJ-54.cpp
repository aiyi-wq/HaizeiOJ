/*************************************************************************
	> File Name: OJ-54.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat 23 May 2020 04:49:24 PM CST
 ************************************************************************/
#include <stdio.h>
#include<string.h>
#define max_n 1500//估算 500^500 

int num[max_n + 5] = {1, 1, 0};
int sum[max_n + 5] = {1, 1, 0};

void carry(int *arr) {
    for (int j = 1; j <= arr[0]; j++) {
        if (arr[j] < 10) continue;
        arr[j + 1] += arr[j] / 10;
        arr[j] %= 10;
        arr[0] += (arr[0] == j);
    }
    return ;
}

void solve(int x) {
    memset(num, 0, sizeof(num));
    memset(sum, 0, sizeof(num));
    num[0] = 1, num[1] = 1;
    sum[0] = 1, sum[1] = 1;
    for (int i = 1; i <= x; i++) {
        for (int j = 1; j <= num[0]; j++) num[j] *= i;
        carry(num);
    }
    for (int i = 1; i <= num[0]; i++) {
        if (!num[i]) continue;
        for (int j = 1; j <= sum[0]; j++) sum[j] *= num[i];
        carry(sum);
    }
    for (int i = sum[0]; i > 0; i--) {
        printf("%d", sum[i]);
    }
    printf("\n");
}

int main() {
    int x;
    while (~scanf("%d", &x)) {
        solve(x);
    }
    return 0;
}
