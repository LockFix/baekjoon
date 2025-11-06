#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int a, x, b, y, T; cin >> a >> x >> b >> y >> T;

    cout << a + (T > 30 ? T - 30 : 0) * x * 21 << ' ';
    cout << b + (T > 45 ? T - 45 : 0) * y * 21;
}