#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    short T; cin >> T;
    while(T--) {
        short N; cin >> N;
        while(N--) {
            short A, B; cin >> A >> B;
            cout << A + B << ' ' << A * B << '\n';
        }
    }
}