#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    short n;
    string s; cin >> n >> s;
    short so = 0, t = 0;
    short index = 0;
    for(short i = 0; i < n; i++) {
        if(s[i] == 's') so++;
        else if(s[i] == 't') t++;
    }
    for(; index < n; index++) {
        if(so == t) break;
        if(s[index] == 's') so--;
        else if(s[index] == 't') t--;
    }
    cout << s.substr(index);
}