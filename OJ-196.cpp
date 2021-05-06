/*************************************************************************
	> File Name: OJ-196.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat 23 May 2020 11:52:43 AM CST
 ************************************************************************/
#include <stdio.h>

int num[55];

int main() {
    int n;
    scanf("%d", &n);
    num[0] = 1; num[1] = 0;
    num[2] = 1; num[3] = 1;
    for (int i = 4; i <= n; i++) {
        num[i] = num[i - 2] + num[i - 3];
    }
    printf("%d\n", num[n]);
    return 0;
}
