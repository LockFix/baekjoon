#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N; cin >> N;
    int arr[N];
    for(int i = 0; i < N; i++) cin >> arr[i];
    if(N == 1) {
        cout << 0;
        return 0;
    }

    long long dp[N];
    dp[0] = arr[0];
    dp[1] = arr[1];

    for(int i = 2; i < N; i++) {
        dp[i] = arr[i] + min(dp[i - 1], dp[i - 2]);
    }
    cout << min(dp[N - 1], dp[N - 2]);
}