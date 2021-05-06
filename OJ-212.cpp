/*************************************************************************
	> File Name: OJ-212.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun 17 May 2020 08:03:07 PM CST
 ************************************************************************/

#include<iostream>
#include <algorithm>
#include <string.h>
#define max_n 100
using namespace std;

char *str[max_n + 5];
//char **str = (char **)malloc(sizeof(char *) * max_n);

bool cmp(const char *str1, const char *str2) {
    int t = strcmp(str1, str2);
    return t < 0;
}
/*struct Stu {
    char name[20];
};*/ 

//struct Stu str[max_n + 5];

/*bool cmp(struct Stu a, struct Stu b) {
    int t = strcmp(a.name, b.name);
    return t < 0;
}*/

int main() {
    for (int i = 0; i < 10; i++) {
        str[i] = (char *)malloc(sizeof(char) * 20);
    }
    for (int i = 0; i < 10; i++) {
        cin >> str[i];
    }
    sort(str, str + 10, cmp);
    for (int i = 0; i < 10; i++) {
        cout << str[i] << endl;
    }
    return 0;
}
