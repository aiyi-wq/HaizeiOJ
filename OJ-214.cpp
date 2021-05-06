/*************************************************************************
	> File Name: OJ-214.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun 17 May 2020 07:45:15 PM CST
 ************************************************************************/

#include<iostream>
#include <algorithm>
#define max_n 30
using namespace std;

int arr[max_n + 5] = {0};

int cmp(int a, int b) {
    return a > b;
}

int main() {
    int n, k, sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cin >> k;
    sort(arr, arr + n, cmp);
    for (int j = 0; j < k; j++) {
        sum += arr[j];
    }
    printf("%.2f\n", sum * 1.0 / k);
}
