/*************************************************************************
	> File Name: OJ-216.cpp
	> Author: 
	> Mail: 
	> Created Time: Tue 19 May 2020 10:27:46 AM CST
 ************************************************************************/
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main() {
    int N;
    string name[105];
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> name[i];
        name[i] = name[i].substr(3);
    }
    sort(name, name + N);
    for (int i = 0; i < N; i++) {
        cout << name[i] << endl;
    }
    return 0;
}
