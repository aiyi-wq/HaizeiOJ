/*************************************************************************
	> File Name: OJ-516.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu 22 Oct 2020 07:50:16 PM CST
 ************************************************************************/

#include<iostream>
#include<algorithm>
using namespace std;

int n, numc[100005], cntc, cntw;
long long ans;
char str[100005];

int main() {
    cin >> n >> &str[1];
    for (int i = 1; i <= n; ++i) {
        if (str[i] == 'C') {
            cntc++;
        }
        numc[i] = cntc;
    }
    for (int j = n; j >= 1; --j) {
        if (str[j] == 'W') {
            cntw++;
        }
        if (str[j] == 'O') {
            ans += (long long)numc[j - 1] * cntw;
        }
    }
    cout << ans << endl; 
    return 0;
}
