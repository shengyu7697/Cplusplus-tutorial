#include <iostream>
#include <queue>

using namespace std;

int main() {
    queue<int> q;
    q.push(1); // [1]
    q.push(2); // [1, 2]
    q.push(3); // [1, 2, 3]

    cout << q.front() << endl; // 1
    cout << q.back() << endl; // 3
    cout << q.size() << endl; // 3

    int a = q.front(); // copy
    int &b = q.front(); // reference

    cout << q.front() << " " << &q.front() << endl; // 印記體位置
    cout << a << " " << &a << endl; 
    cout << b << " " << &b << endl; // 與 q.front() 記憶體位置相同

    // 印出 queue 內所有內容
    int size = q.size();
    for (int i = 0; i < size; i++) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << "\n";

    // 印出 queue 內所有內容
    /*while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << "\n";*/

    return 0;
}
