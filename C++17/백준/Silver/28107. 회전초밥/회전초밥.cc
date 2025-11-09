#include <iostream>
#include <unordered_map>
#include <queue>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N, M; cin >> N >> M;
    unordered_map<int, queue<int>> m;
    int arr[N] = {0};
    for(int i = 0; i < N; i++) {
        int k; cin >> k;
        while(k--) {
            int temp; cin >> temp;
            m[temp].push(i);
        }
    }
    while(M--) {
        int temp; cin >> temp;
        if(m[temp].empty()) continue;
        arr[m[temp].front()]++;
        m[temp].pop();
    }
    for(int i = 0; i < N; i++) {
        cout << arr[i] << ' ';
    }
}