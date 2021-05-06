/*************************************************************************
	> File Name: OJ-635.cpp
	> Author: Aiiii
	> Mail: 2646967818@qq.com
	> Created Time: Thu 19 Nov 2020 07:04:58 PM CST
 ************************************************************************/

#include<iostream>
#include<queue>
#include<cstring>
using namespace std;

struct edge {
    int e, v, next;
};

edge edg[10005];
int n, m, head[105], in_degree[105], out_degree[105], c[105], u[105];

int main() {
    memset(head, -1, sizeof(head));
    queue<int> que;
    cin >> n >> m;
    for (int i =1; i <= n; ++i) {
        cin >> c[i] >> u[i];
        if (c[i] != 0) {
            que.push(i);
        }
    }
    for (int i = 0; i < m; ++i) {
        int a, b, c;
        cin >> a >> b >> c;
        edg[i].e = b;
        edg[i].v = c;
        edg[i].next = head[a];
        head[a] = i;
        in_degree[b]++;
        out_degree[a]++;
    }
    while (!que.empty()) {
        int temp = que.front();
        que.pop();
        for (int i = head[temp]; i != -1; i = edg[i].next) {
            int e = edg[i].e, v = edg[i].v;
            if (c[temp] > 0) {
                c[e] += c[temp] * v;
            }
            in_degree[e]--;
            if (in_degree[e] == 0) {
                que.push(e);
                c[e] -= u[e];
            }
        }
    }
    int flag = 0;
    for (int i = 1; i <= n; ++i) {
        if (out_degree[i] == 0 && c[i] > 0) {
            flag = 1;
            cout << i << " " << c[i] << endl;
        }
    }
    if (flag == 0) {
        cout << "NULL" << endl;
    }
    return 0;
}
