#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string s, s2; cin >> s >> s2;
    if(s == s2) cout << 0;
    else cout << 1550;
}