#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    short T; cin >> T;

    while(T--) {
        string s; cin >> s;

        short tmp = s.find('D');
        if(tmp == s.npos) cout << s.length() << '\n';
        else cout << tmp << '\n';
    }
}