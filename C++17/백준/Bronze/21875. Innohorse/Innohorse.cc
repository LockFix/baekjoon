#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string s, ss; cin >> s >> ss;

    short a = abs(s[0] - ss[0]);
    short b = abs(s[1] - ss[1]);
    if(a < b) cout << a << ' ' << b;
    else cout << b << ' ' << a;
}