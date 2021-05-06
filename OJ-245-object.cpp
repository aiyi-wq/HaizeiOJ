/*************************************************************************
	> File Name: OJ-245-object.cpp
	> Author: Aiiii
	> Mail: 2646967818@qq.com
	> Created Time: Wed 04 Nov 2020 08:39:31 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

#define MAX_N 100000

//以对象的思维解决问题
class DataManager {
    //属性——成员变量
private:
    int collection[MAX_N + 3] = {0};
    int collectionSize = 0;
    //行为——函数
public:
    void collectData() {
        cin >> collectionSize;
        for ....
        cin >> collection[i];
    }
    void sortCollection();
    int nthElement(int n);
}

int main() {
    DataManager manager;
    manager.collecData();
    manager.sort...
    manager.show...
    manager.sum...
    return 0;
}
