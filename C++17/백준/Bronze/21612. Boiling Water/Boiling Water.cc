#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    short b; cin >> b;
    short p = 5 * b - 400;
    cout << p << '\n';
    if(p < 100) cout << 1;
    else if(p == 100) cout << 0;
    else cout << -1;
}