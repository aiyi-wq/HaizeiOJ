/*************************************************************************
	> File Name: OJ-442.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri 22 May 2020 03:10:37 PM CST
************************************************************************/
#include <stdio.h>

int num[35] = {0};

int main() {
    int n;
    scanf("%d",&n);
    num[0] = 0;
    num[1] = 1;
    num[2] = 2;
    for (int i = 3; i <= n; ++i) {
        num[i] = num[i - 1] + num[i -2];
	} 
	for (int i = 1; i <= n; ++i) {
        (i == 1) && printf("%d", num[i]);
        (i != 1) && printf(" %d", num[i]);
	}
    printf("\n");
    return 0;
}
