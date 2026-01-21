#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    short T; cin >> T;

    while(T--) {
        short N; cin >> N;
        short sum = 0;
        while(N--) {
            short tmp; cin >> tmp;
            sum += tmp;
        }
        cout << sum << '\n';
    }
}