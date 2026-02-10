#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    short a, b; cin >> a >> b;

    cout << 100 - a << ' ' << 100 - b << ' ' << -100 + a + b << ' ' << (100 - a) * (100 - b) << ' ' << (100 - a) * (100 - b) / 100 << ' ' << (100 - a) * (100 - b) % 100;
    if((100 - a) * (100 - b) > 99) cout << '\n' << (100 - a) * (100 - b) / 100 - 100 + a + b << ' ' << (100 - a) * (100 - b) % 100;
    else cout << '\n' << -100 + a + b << ' ' << (100 - a) * (100 - b) % 100;
}