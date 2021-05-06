/*************************************************************************
	> File Name: OJ-508.cpp
	> Author: 
	> Mail: 
	> Created Time: Tue 16 Jun 2020 12:57:42 PM CST
 ************************************************************************/

#include<iostream>
#include<algorithm>
using namespace std;

//i.手电传递效率高
//2.手电使用效率高
//两者比较
int main() {
    int n, num[1005], ans = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }
    sort(num, num + n);
    for (int i = n - 1; i >= 0; i -= 2) {
        if (i == 0) {
            ans += num[0];
            break;
        }
        if (i == 1) {
            ans += num[1];
            break;
        }
        if (i == 2) {
            ans += num[0] + num[1] + num[2];
            break;
        }
        ans += min(num[i] + num[0] + num[i - 1] + num[0],num[1] + num[0] + num[i] + num[1]);
    }
    cout << ans << endl;
    return 0;
}
