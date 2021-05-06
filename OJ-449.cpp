/*************************************************************************
	> File Name: OJ-449.cpp
	> Author: 
	> Mail: 
	> Created Time: Tue 19 May 2020 03:17:42 PM CST
 ************************************************************************/
#include <stdio.h>

int a[25][25];

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        a[i][1] = a[i][i] = 1;
    }//两边的数都为1
    for (int i = 3; i <= n; i++) {
        for (int j = 2; j <= i - 1; j++) {
            a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            (i == j) && printf("%d", a[i][j]);
            (i != j) && printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
