#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string s; cin >> s;
    s = s.substr(0, 5);
    short N; cin >> N;
    short ans = 0;
    while(N--) {
        string tmp; cin >> tmp;
        if(s == tmp.substr(0, 5)) ans++; 
    }
    cout << ans;
}