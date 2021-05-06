/*************************************************************************
	> File Name: OJ-173.cpp
	> Author: 
	> Mail: 
	> Created Time: Tue 19 May 2020 09:18:03 PM CST
 ************************************************************************/
#include <stdio.h>

char str[1005] = {0};

int main() {
    int let = 0, num = 0, spa = 0, oth = 0;
    gets(str);
    for (int i = 0; str[i]; i++) {
        if (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z') {
            let++;
        } else if (str[i] >= '0' && str[i] <= '9') {
            num++;
        } else if (str[i] == ' ') {
            spa++;
        } else {
            oth++;
        }
    }
    printf("%d %d %d %d",let, num, spa,oth);
    return 0;
}
