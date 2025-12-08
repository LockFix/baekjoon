#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    short N; cin >> N;
    string s; cin >> s;
    if(s.find("gori") == s.npos) cout << "NO";
    else cout << "YES";
}