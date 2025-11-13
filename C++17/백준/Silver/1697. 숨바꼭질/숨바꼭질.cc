#include <iostream>
#include <queue>
#include <unordered_set>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int N, M; cin >> N >> M;
    queue<int> q;
    q.push(N);
    unordered_set<int> visited;
    int cnt = 0;
    visited.insert(N);
    while(!q.empty()) {
        int temp = q.front();
        if(temp == M) break;
        queue<int> q2;
        while(!q.empty() && temp != M) {
            temp = q.front();
            if(temp < M && visited.find(temp * 2) == visited.end()) {
                visited.insert(temp * 2);
                q2.push(temp * 2);
            }
            if(temp + 1 <= M && visited.find(temp + 1) == visited.end()) {
                visited.insert(temp + 1);
                q2.push(temp + 1);
            }
            if(temp - 1 > 0 && visited.find(temp - 1) == visited.end()) {
                visited.insert(temp - 1);
                q2.push(temp - 1);
            }
            q.pop();
        }
        if(temp == M) break;
        q = q2;
        cnt++;
    }
    cout << cnt;
}