/*************************************************************************
	> File Name: OJ-169.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun 24 May 2020 02:50:15 PM CST
 ************************************************************************/
#include <stdio.h>
#define max_n 256

int arr[max_n + 5] = {0};
char str[max_n + 5];

int main() {
    int n, val, sum = 0;
    char key;
    scanf("%d", &n);
    for (int i = 0; i < 2 * n; i++) {
        scanf("%c%d", &key, &val);
        arr[key] = val;//强转字符，字符型变量放在数组里可以转换成ASC码值
    }
    scanf("%s", str);
    for (int i = 0; str[i]; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') sum += arr[str[i]];
    }
    printf("%d\n", sum);
    return 0;
}
