/*************************************************************************
	> File Name: OJ-519.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu 22 Oct 2020 08:28:16 PM CST
 ************************************************************************/

#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    long long a, b, ans = 0;
    cin >> a >> b;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (i == j) continue;
            for (int k = 3; k <= 17; k++) {
                for (int l = 1; l <= k; l++) {
                    if (i == 0 && l != 1) break;
                    if (j == 0 && l == 1) continue;
                    long long t = 0;
                    for (int m = 1; m <= k; m++) {
                        if (m == l) 
                            t = t * 10 + j;
                        else 
                            t = t * 10 + i;
                    }
                    if (t >= a && t <= b) ans++;
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}
