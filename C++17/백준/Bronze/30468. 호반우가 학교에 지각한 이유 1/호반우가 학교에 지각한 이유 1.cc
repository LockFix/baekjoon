#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    short s, d, i, l, n; cin >> s >> d >> i >> l >> n;
    n *= 4;
    if(n < s + d + i + l) cout << 0;
    else cout << n - (s + d + i + l);
}