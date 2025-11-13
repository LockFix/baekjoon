#include <iostream>
#include <queue>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int N, M; cin >> N >> M;
    queue<int> q;
    q.push(N);
    bool visited[200001];
    int cnt = 0;
    int ans = 0;
    visited[N] = true;
    while(!q.empty()) {
        int temp = q.front();
        bool flag = true;
        int size = q.size();
        for(int i = 0; i < size; i++) {
            temp = q.front();
            if((temp < M && !visited[temp * 2]) || temp * 2 == M) q.push(temp * 2);
            if((temp + 1 <= M && !visited[temp + 1]) || temp + 1 == M) q.push(temp + 1);
            if((temp - 1 > 0 && !visited[temp - 1]) || temp - 1 == M) q.push(temp - 1);
            if(temp == M) {
                ans++;
                flag = false;
            }
            q.pop();
            visited[temp] = true;
        }
        if(!flag) break;
        cnt++;
    }
    cout << cnt << '\n' << ans;
}