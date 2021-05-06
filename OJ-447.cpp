/*************************************************************************
	> File Name: OJ-447.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri 22 May 2020 04:41:40 PM CST
 ************************************************************************/
#include<stdio.h>

int num[14] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};

int main() {
    int n, flag = 0;
    while (~scanf("%d", &n)) {
        for (int i = 0; i < 14; i++) {
            if (n % num[i] == 0) flag = 1;
        }
        (flag == 0) && printf("NO\n");
        (flag == 1) && printf("YES\n");
        flag = 0;
    }
    return 0;
}
