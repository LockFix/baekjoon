#include <iostream>
#include <map>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    short N; cin >> N;

    map<char, short> m;
    while(N--) {
        string temp; cin >> temp;

        m[temp[0]]++;
    }
    string ans = "";
    for(pair<char, short> i : m) {
        if(i.second >= 5) ans += i.first;
    }
    if(ans == "") cout << "PREDAJA";
    else cout << ans;
}