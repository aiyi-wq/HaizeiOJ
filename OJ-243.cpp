/*************************************************************************
	> File Name: OJ-243.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun 24 May 2020 04:03:02 PM CST
 ************************************************************************/
#include <stdio.h>
#define max_n INT32_MAX
#define max_m 200000

int a[max_m + 5][max_n + 5] = {0};
int A[200005] = {0};

int binary_serach(int *arr, int n) {
    int head = 0, tail = n - 1, mid;
    while (head <= tail) {
        if ()
    }
    
    return = 0;
}

int main() {
    int T, N;
    long long S, E, D;
    scanf("%d%d", &T, &N);
    for (int i = 0; i <= N; i++) {
        scanf("%ld%ld%ld", &S, &E, &D);
        for (int j = S; j <= E; j += D) {
            a[i][j] = 1;
        }
    }
    for (int i = 0; i <= N; i++) {
        for (int j = 0; j <= N; j++) {
            A[i] += a[j][i];
        }
    }
    int index = 0, num = 0;
    for (int i = 1; i <= N; i++) {
        if (!A[i] & 1) continue;
        index = A[i];
        num = i;
        break;
    }
    (!index) && printf("Poor QIN Teng:(\n");
    (index) && printf("%d %d\n", index, num);
    return 0;
}
