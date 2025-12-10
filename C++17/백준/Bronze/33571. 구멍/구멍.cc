#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    string s; getline(cin, s);
    short count = 0;
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == 'B') count += 2;
        else if(s[i] == '@' || s[i] == 'b' || s[i] == 'D' || s[i] == 'd' || s[i] == 'O' || s[i] == 'o' || s[i] == 'p' || s[i] == 'P' || s[i] == 'Q' || s[i] == 'q' || s[i] == 'R' || s[i] == 'g' || s[i] == 'A' || s[i] == 'a' || s[i] == 'e') count++;
    }
    cout << count;
}