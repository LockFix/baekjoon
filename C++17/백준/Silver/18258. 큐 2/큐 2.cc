#include <iostream>
#include <queue>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N; cin >> N;
    queue<int> q;
    while(N--) {
        string temp; cin >> temp;
        if(temp == "push") {
            int tmp; cin >> tmp;
            q.push(tmp);
        } else if(temp == "pop") {
            if(q.empty()) cout << "-1\n";
            else {
                cout << q.front() << '\n';
                q.pop();
            } 
        } else if(temp == "size") cout << q.size() << '\n';
        else if(temp == "empty") {
            if(q.empty()) cout << "1\n";
            else cout << "0\n";
        }
        else if(temp == "front") {
            if(q.empty()) cout << "-1\n";
            else cout << q.front() << '\n';
        } else {
            if(q.empty()) cout << "-1\n";
            else cout << q.back() << '\n';
        }
    }
}   