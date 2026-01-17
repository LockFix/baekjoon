#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    short T; cin >> T;

    while(T--) {
        short N, K; cin >> N >> K;
        short result = 0;
        while(N--) {
            short a; cin >> a;

            result += a / K;
        }
        cout << result << '\n';
    }
}