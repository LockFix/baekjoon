#include <iostream>
#include <unordered_set>
#include <queue>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    short N, M; cin >> N >> M;
    if(M == 0) {
        cout << 0;
        return 0;
    }
    if(N == 0) {
        cout << -1;
        return 0;
    }
    if(N == 1) {
        short tmp; cin >> tmp;

        if(tmp != 0 && M % tmp == 0 && M / tmp > 0) cout << M / tmp;
        else cout << -1;
        return 0;
    }
    unordered_set<short> visited;

    short a, b; cin >> a >> b;
    queue<pair<short, short>> q;
    q.push({a, 1});
    q.push({b, 1});
    visited.insert(a);
    visited.insert(b);
    while(!q.empty()) {
        pair<short, short> tmp = q.front();
        q.pop();

        if(tmp.first == M) {
            cout << tmp.second;
            return 0;
        }
        if(visited.find(tmp.first + a) == visited.end() && tmp.first + a <= 1000 && tmp.first + a >= -1000) {
            visited.insert(tmp.first + a);
            q.push({tmp.first + a, tmp.second + 1});
        }
        if(visited.find(tmp.first + b) == visited.end() && tmp.first + b <= 1000 && tmp.first + b >= -1000) {
            visited.insert(tmp.first + b);
            q.push({tmp.first + b, tmp.second + 1});
        }
    }
    cout << -1;
}