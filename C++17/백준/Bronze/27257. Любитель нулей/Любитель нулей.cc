#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    string s; cin >> s;
    short index = 0;
    for(; index < s.length(); index++) {
        if(s[index] != '0') break;
    }
    short j = s.length() - 1;
    for(; j > index; j--) {
        if(s[j] != '0') break;
    }
    short count = 0;
    for(; index < j; index++) {
        if(s[index] == '0') count++;
    }
    cout << count;
}