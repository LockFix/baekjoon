#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    double a, b; cin >> a >> b;
    a -= a * b / 100;
    if(a >= 100) cout << 0;
    else cout << 1;
}