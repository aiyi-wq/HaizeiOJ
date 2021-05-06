/*************************************************************************
	> File Name: OJ-213.cpp
	> Author: 
	> Mail: 
	> Created Time: Tue 19 May 2020 09:11:24 AM CST
 ************************************************************************/
#include<iostream>
#include<algorithm>
using namespace std;

int B[35] = {0};
int A[35] = {0};

int cmp(int a, int b) {
    return a > b;
}

int main() {
    int N;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    sort(A, A + N, cmp);
    for (int i = 0; i < N; i++) {
        cout << A[i] << endl;
        if (A[i] == 100) {
            B[1]++;
        } else if (A[i] >= 90) {
            B[2]++;
        } else if (A[i] >= 80) {
            B[3]++;
        } else if (A[i] >= 70) {
            B[4]++;
        } else if (A[i] >= 60) {
            B[5]++;
        } else {
            B[6]++;
        }
    }
    for (int i = 1; i <= 6; i++) {
        i == 6 && cout << B[6] << endl;
        i != 6 && cout << B[i] << " ";
    }
    return 0;
}
