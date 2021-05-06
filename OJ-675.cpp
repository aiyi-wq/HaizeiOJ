/*************************************************************************
	> File Name: OJ-675.cpp
	> Author: Aiiii
	> Mail: 2646967818@qq.com
	> Created Time: Tue 24 Nov 2020 06:14:26 PM CST
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<algorithm>
#include<queue>
using namespace std;

//链式前向星
struct edge {
    int e, v, next;
};

edge edg[100005];
int n, m, c, ans[100005], in_degree[100005], head[100005];

int main() {

    for (int i = 0; i < c; ++i) {
        int a, b, c;
        cin >> a >> b >> c;
        edg[i].e = b;
        edg[i].v = c;
        edg[i].next = head[a];
        head[a] = i;
        in_degree[b]++;
    }
    queue<int> que;
    for (int i = 1; i <= n; ++i) {
        if (in_degree[i] == 0) {
            que.push(i);
        }
    } 
    while (!que.empty()) {
        int temp = que.front();
        que.pop();
        for (int i = head[temp]; i != -1; i = edg[i].next) {
            int e = edg[i].e, v = edg[i].v;
            ans[e] = max(ans[e], ans[temp] + v);
            in_degree[e]--;
            if (in_degree[e] == 0) {
                que.push(e);
            }
        }
    }
    for (int i = 1; i <= n; ++i) {
        cout << ans[i] << endl;
    }

    return 0;
}
