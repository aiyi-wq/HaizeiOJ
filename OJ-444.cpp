/*************************************************************************
	> File Name: OJ-444.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri 22 May 2020 03:37:22 PM CST
 ************************************************************************/
#include <stdio.h>
#define swap(a, b) {\
__typeof(a) __temp = a;\
a = b; b = __temp;\
}


int num[105] = {0};

int main() {
    int n, x;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &num[i]);
    }
    scanf("%d", &x);
    int tmp = n;
    while (tmp != x) {
        swap(num[tmp], num[tmp - 1]);
        tmp--;
    }
    for (int i = 1; i <= n; i++) {
        (i == 1) && printf("%d", num[1]);
        (i != 1) && printf(" %d", num[i]);
    }
    printf("\n");
    return 0;
}
