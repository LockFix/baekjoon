#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    short l, r; cin >> l >> r;
    if(l == 0 && r == 0) {
        cout << "Not a moose";
        return 0;
    }
    if(l == r) cout << "Even " << l + r;
    else cout << "Odd " << max(l, r) * 2;
}