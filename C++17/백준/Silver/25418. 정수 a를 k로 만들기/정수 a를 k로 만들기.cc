#include <iostream>
#include <unordered_set>
#include <queue>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int a, k; cin >> a >> k;

    unordered_set<int> visited;

    queue<pair<int, int>> q;
    q.push({a, 0});
    visited.insert(a);
    while(!q.empty()) {
        pair<int, int> tmp = q.front();
        q.pop();
        if(tmp.first == k) {
            cout << tmp.second;
            return 0;
        }
        if(tmp.first * 2 <= k && visited.find(tmp.first * 2) == visited.end()) {
            visited.insert(tmp.first * 2);
            q.push({tmp.first * 2, tmp.second + 1});
        }
        if(tmp.first + 1 <= k && visited.find(tmp.first + 1) == visited.end()) {
            visited.insert(tmp.first + 1);
            q.push({tmp.first + 1, tmp.second + 1});
        }
    }
}