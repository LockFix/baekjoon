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
    bool visited[200000];
    int cnt[200000];
    for(int i = 0; i < 200000; i++) cnt[i] = -1;
    cnt[N] = 0;
    visited[N] = true;
    while(!q.empty()) {
        int temp = q.front();
        int size = q.size();
        while(size-- && temp != M) {
            temp = q.front();
            if(temp < M && !visited[temp * 2]) {
                q.push(temp * 2);
                cnt[temp * 2] = min((cnt[temp * 2] == -1 ? INT32_MAX : cnt[temp * 2]), cnt[temp]);
            }
            if(temp + 1 <= M && !visited[temp + 1]) {
                q.push(temp + 1);
                cnt[temp + 1] = min((cnt[temp + 1] == -1 ? INT32_MAX : cnt[temp + 1]), cnt[temp] + 1);
            }
            if(temp - 1 >= 0 && !visited[temp - 1]) {
                q.push(temp - 1);
                cnt[temp - 1] = min((cnt[temp - 1] == -1 ? INT32_MAX : cnt[temp - 1]), cnt[temp] + 1);
            }
            visited[temp] = true;
            q.pop();
        }
        if(temp == M) break;
    }
    cout << cnt[M];
}