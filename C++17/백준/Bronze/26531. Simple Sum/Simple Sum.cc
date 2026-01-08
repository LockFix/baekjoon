#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string s; getline(cin, s);

    short a = s[0] - '0', b = s[4] - '0', c = s[8] - '0';
    if(a + b == c) cout << "YES";
    else cout << "NO";
}