#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <stack>

using namespace std;

vector<short> g[1001];

void bfs(short start) {
    queue<short> q;
    q.push(start);
    bool visited[1001] = {};
    visited[start] = true;

    while(!q.empty()) {
        short tmp = q.front();
        q.pop();

        cout << tmp << ' ';

        for(short i : g[tmp]) {
            if(!visited[i]) {
                visited[i] = true;
                q.push(i);
            }
        }
    }
}
bool visited[1001];
void dfs(short start) {
    visited[start] = true;

    cout << start << ' ';

    for(short i : g[start]) {
        if(!visited[i]) dfs(i);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    short N, M, V; cin >> N >> M >> V;

    for(short i = 0; i < M; i++) {
        short a, b; cin >> a >> b;

        g[a].push_back(b);
        g[b].push_back(a);
    }
    for(short i = 1; i <= N; i++) sort(g[i].begin(), g[i].end());
    dfs(V);
    cout << '\n';
    bfs(V);
}