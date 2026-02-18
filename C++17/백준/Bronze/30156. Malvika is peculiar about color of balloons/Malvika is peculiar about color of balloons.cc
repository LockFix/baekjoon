#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    short N; cin >> N;

    while(N--) {
        string s; cin >> s;
        short a = 0, b = 0;
        for(short i = 0; i < s.length(); i++) {
            if(s[i] == 'a') a++;
            else b++;
        }
        cout << min(a, b) << '\n';
    }
}