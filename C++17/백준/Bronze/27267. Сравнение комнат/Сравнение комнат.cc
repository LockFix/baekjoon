#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    short a, b, c, d; cin >> a >> b >> c >> d;

    if(a * b == c * d) cout << "E";
    else if(a * b > c * d) cout << "M";
    else cout << 'P';
}