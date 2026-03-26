#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int x, l, r; cin >> x >> l >> r;

    if(l > x) cout << l;
    else if(x > r) cout << r;
    else cout << x;
}