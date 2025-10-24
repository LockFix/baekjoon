#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string s; cin >> s;
    int a = 0;
    int b = 0;
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == 'A') a++;
        else b++;
    }
    cout << a << " : " << b;
}