/*************************************************************************
	> File Name: OJ-198.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat 23 May 2020 12:04:41 PM CST
 ************************************************************************/
#include<stdio.h>

long long num[100005] = {0, 1, 1};

int main() {
    long long n;
    scanf("%lld", &n);
    for (int i = 3; i <= n; i++) {
        num[i] = num[i - 1] + num[i - 2];
        num[i] %= 1000000007;
    }
    printf("%lld\n", num[n]);
    return 0;
}
