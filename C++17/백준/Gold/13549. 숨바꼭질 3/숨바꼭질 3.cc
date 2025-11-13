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
    int cnt[200000];
    for(int i = 0; i < 200000; i++) cnt[i] = INT32_MAX;
    cnt[N] = 0;
    while(!q.empty()) {
        int temp = q.front();
        int size = q.size();
        temp = q.front();
        if(temp < M && cnt[temp * 2] > cnt[temp]) {
            q.push(temp * 2);
            cnt[temp * 2] = cnt[temp];
        }
        if(temp + 1 <= M && cnt[temp + 1] > cnt[temp] + 1) {
            q.push(temp + 1);
            cnt[temp + 1] = cnt[temp] + 1;
        }
        if(temp - 1 >= 0 && cnt[temp - 1] > cnt[temp] + 1) {
            q.push(temp - 1);
            cnt[temp - 1] = cnt[temp] + 1;
        }
        q.pop();
    }
    cout << cnt[M];
}