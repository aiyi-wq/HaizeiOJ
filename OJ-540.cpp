/*************************************************************************
	> File Name: OJ-540.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu 15 Oct 2020 07:18:46 PM CST
 ************************************************************************/

#include<iostream>
#include<algorithm>
using namespace std;

int n, x, num[45], ans[2][2100000], cnt[2], sum;

//深搜函数
void func(int mark, int s, int e) {
    if (sum > x) {
        return ;
    }
    ans[mark][cnt[mark]++] = sum;
    for (int i = s; i < e; i++) {
        sum += num[i];
        func(mark, i + 1, e);
        sum -= num[i];
    }
}
int main() {
    while (cin >> n >> x) {
        cnt[0] = cnt[1] = 0;
        for (int i = 0; i < n; ++i) {
            cin >> num[i];
        }
        func(0, 0, n / 2);
        func(1, n / 2, n);
        sort(ans[1], ans[1] + cnt[1]);
        int f = 0;
        for (int i = 0; i < cnt[0]; ++i) {
            int l = 0, r = cnt[1] - 1, t = x - ans[0][i];
            while (l <= r) {
                int mid = (l + r) >> 1;
                if (t == ans[1][mid]) {
                    cout << "YES" << endl;
                    f = 1;
                    break;
                } if (t < ans[1][mid]) {
                    r = mid - 1;
                } else {
                    l = mid + 1;
                }
            }
            if (f) break;
        }
        if (!f) cout << "NO" << endl;
    }
    return 0;
}
