#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N, K; cin >> N >> K;
    int arr[N];
    for(int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    int count = 0;
    for(int i = N - 1; i >= 0, K != 0; i--) {
        count += K / arr[i];
        K %= arr[i];
    }
    cout << count;
}
