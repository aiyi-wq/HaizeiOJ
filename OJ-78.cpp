/*************************************************************************
	> File Name: OJ-78.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat 23 May 2020 04:19:03 PM CST
 ************************************************************************/
#include <stdio.h>
#include <string.h>
#define max_n 100

int ans[max_n + 5] = {1, 0};
char str[max_n + 5];

int main() {
    for (int i = 0; i < 2; i++) {
        scanf("%s", str);
        int len = strlen(str);
        if (ans[0] < len) ans[0] = len;
        for (int j = 0; j < len; j++) {
            ans[len - j] += (str[j] - '0');
        }
        for (int j = 1; j <= ans[0]; j++) {
            if (ans[j] < 10) continue;
            ans[j + 1] += ans[j] / 10;
            ans[j] %= 10;
            ans[0] += (ans[0] == j);
        }
    }
    for (int i = ans[0]; i > 0; i--) {
        printf("%d", ans[i]);
    }
    printf("\n");
    return 0;
}
