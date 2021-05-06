/*************************************************************************
	> File Name: OJ-521.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu 22 Oct 2020 08:48:24 PM CST
 ************************************************************************/
//DFS

#include<iostream>
#define MAX 3000000
using namespace std;

int isprime[MAX + 5] = {0};
int n, m, num[35], ans;

void init_prime() {
    for (int i = 2; i <= MAX; ++i) {
        if (!isprime[i]) //isprime[0] += 1;
        for (int j = 1; j <= isprime[0]; ++j) {
            if (i * isprime[j] > MAX) break;
            isprime[i * isprime[j]] = 1;
            if (i % isprime[j] == 0) break;
        }
    }
}

//DFS
void func(int s, int left, int sum) {
    if (left == 0) {
        if (isprime[sum] == 0) ans++;
        return ;
    }
    for (int i = s; i <= (n - left); ++i) {
        func(i + 1, left - 1, sum + num[i]);
    }
}

int main() {
    init_prime();
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        cin >> num[i];
    }
    func(0, m, 0);
    cout << ans << endl;
    return 0;
}
