#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    short N; cin >> N;
    while(N--) {
        string s; cin >> s;
        if(s[s.length() - 1] % 2 == 0) cout << "even\n";
        else cout << "odd\n";
    }
}