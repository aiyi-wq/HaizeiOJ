/*************************************************************************
	> File Name: OJ-168.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun 24 May 2020 05:06:15 PM CST
 ************************************************************************/
#include<iostream>
using namespace std;
#define max_n 1000
#define max_m 100

typedef struct name {
    char str[max_m + 5];
} Name;

Name arr[max_n + 5];
char tmp[max_n + 5];

void output(Name *arr, int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i].str << endl;
    }
    return ;
}

void solve(Name *arr, int n) {
    for (int i = 0; i < n; i++) {
        int k = 0;
        cout << tmp << endl;
        for (int j = 0; arr.str[j]; ) {
            if (strncmp(arr.str[j], "Ban_smoking", 11)) tmp[k++] = ;
            strnpy(arr.str[j], "No_smoking", 10);
            k += 10;
            j += 11;
        }
        cout << tmp << endl;
        memcpy(a, tmp, sizeof(tmp));
        memset(tmp, 0, sizeof(tmp));
        cout << a << endl;
    }
    output(arr, n);
    return ;
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> arr[i].str;
    solve(arr);
    return 0;
}
