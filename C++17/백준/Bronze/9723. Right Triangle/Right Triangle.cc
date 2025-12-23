#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    for(int i = 1; i <= t; i++) {
        short a, b, c; cin >> a >> b >> c;
        if(a * a == b * b + c * c || b * b == a * a + c * c || c * c == b * b + a * a)
            cout << "Case #" << i << ": YES\n";
        else cout << "Case #" << i << ": NO\n";
    }
}