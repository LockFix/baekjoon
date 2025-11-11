#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <queue>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    short n, p; cin >> n >> p;

    unordered_map<short, unordered_set<short>> m;

    for(short i = 0; i < p; i++) {
        short a, b; cin >> a >> b;
        m[a].insert(b);
        m[b].insert(a);
    }
    unordered_set<short> answer = m[1];
    if(answer.empty()) {
        cout << 0;
        return 0;
    }
    queue<short> q;
    for(short i : answer) {
        q.push(i);
    }
    while(!q.empty()) {
        short temp = q.front();
        for(short i : m[temp]) {
            if(answer.find(i) == answer.end()) {
                answer.insert(i);
                q.push(i);
            }
        }
        q.pop();
    }
    cout << answer.size() - 1;
}