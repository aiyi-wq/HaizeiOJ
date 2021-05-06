/*************************************************************************
	> File Name: OJ-258.cpp
	> Author: 
	> Mail: 
	> Created Time: Tue 16 Jun 2020 02:01:00 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;
#define max_n 100

int arr[max_n + 5][max_n + 5];

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> arr[i][j];
            arr[i][j] += arr[i - 1][j];
        }
    }
    int ans = 0x80000000;
    for (int i = 1; i <= n; i++) {
        for (int j = i; j <= n; j++) {
            int pre = 0, sum = 0, tmp = 0x80000000;
            for (int k = 1; k <= n; k++) {
                sum += arr[j][k] - arr[i - 1][k];
                tmp = max(tmp, sum - pre);
                pre = min(sum, pre);
            }
            ans = max(ans, tmp);
        }
    }
    cout << ans << endl;
    return 0;
}
