#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long K, N; cin >> K >> N;
    if(N == 1) {
        cout << -1;
        return 0;
    }
    cout << K * N / (N - 1) + (K * N % (N - 1) == 0 ? 0 : 1);
}