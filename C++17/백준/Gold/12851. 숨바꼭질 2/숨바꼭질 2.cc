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
    int ans = 0;
    visited.insert(N);
    while(!q.empty()) {
        int temp = q.front();
        bool flag = true;
        queue<int> q2;
        while(!q.empty()) {
            temp = q.front();
            if((temp < M && visited.find(temp * 2) == visited.end()) || temp * 2 == M) q2.push(temp * 2);
            if((temp + 1 <= M && visited.find(temp + 1) == visited.end()) || temp + 1 == M) q2.push(temp + 1);
            if((temp - 1 > 0 && visited.find(temp - 1) == visited.end()) || temp - 1 == M) q2.push(temp - 1);
            if(temp == M) {
                ans++;
                flag = false;
            }
            q.pop();
            visited.insert(temp);
        }
        if(!flag) break;
        q = q2;
        cnt++;
    }
    cout << cnt << '\n' << ans;
}