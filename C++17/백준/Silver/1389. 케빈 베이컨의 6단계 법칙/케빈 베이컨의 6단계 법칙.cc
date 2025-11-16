#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    short N, M; cin >> N >> M;

    long long arr[N + 1][N + 1];
    for(int i = 1; i <= N; i++) {
        for(int j = 1; j <= N; j++) {
            if(i == j) {
                arr[i][j] = 0;
                continue;
            }
            arr[i][j] = INT32_MAX;
        }
    }
    while(M--) {
        short a, b; cin >> a >> b;

        arr[a][b] = 1;
        arr[b][a] = 1;
    }
    for(int i = 1; i <= N; i++) {
        for(int j = 1; j <= N; j++) {
            for(int k = 1; k <= N; k++) {
                if(arr[j][k] > arr[j][i] + arr[i][k]) {
                    arr[j][k] = arr[j][i] + arr[i][k];
                }
            }
        }
    }
    int min = INT32_MAX;
    short ans = 1;
    for(int i = 1; i <= N; i++) {
        long long sum = 0;
        for(int j = 1; j <= N; j++) {
            sum += arr[i][j];
        }
        if(sum < min) {
            min = sum;
            ans = i;
        }
    }
    cout << ans;
}