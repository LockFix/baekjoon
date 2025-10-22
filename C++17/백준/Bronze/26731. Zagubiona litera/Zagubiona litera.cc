#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string s; cin >> s;
    for(int i = 65; i < 91; i++) {
        if(s.find((char) i) == s.npos) {
            cout << (char) i;
            return 0;
        }
    }
}