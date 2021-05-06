/*************************************************************************
	> File Name: OJ-195.cpp
	> Author: 
	> Mail: 
	> Created Time: Tue 19 May 2020 09:06:58 AM CST
 ************************************************************************/
#include <stdio.h>
#define max_n 100000

int arr[max_n + 5] = {0};
int arr1[max_n + 5] = {0};

int binary_search(int n, int x) {
    int head = 0, tail = n - 1, mid;
        while (head <= tail) {
        mid = (head + tail + 1) / 2;
			 if (head == tail) return arr[tail];
			if (arr[mid] > arr1[x]) tail = mid - 1;
        else head = mid;
    }
    return 0;
}

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }   
    for (int j = 0; j < m; j++) {
        scanf("%d", &arr1[j]);
    }
    for (int k = 0; k < m; k++) {
       (k == 0) && printf("%d", binary_search(n, 0));
       (k != 0) && printf(" %d", binary_search(n, k));
    }
    printf("\n");
    return 0;
}
