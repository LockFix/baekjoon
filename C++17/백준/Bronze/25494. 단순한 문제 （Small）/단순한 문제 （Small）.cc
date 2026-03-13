#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    short T; cin >> T;

    while(T--) {
        short a, b, c; cin >> a >> b >> c;
        cout << min(a, min(b, c)) << '\n';
    }
}