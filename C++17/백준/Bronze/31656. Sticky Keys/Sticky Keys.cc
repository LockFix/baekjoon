#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string s; getline(cin, s);
    char previous = NULL;

    for(int i = 0; i < s.length(); i++) {
        if(s[i] == previous) {
            previous = s[i];
            s.erase(i, 1);
            i--;
        } else previous = s[i];
    }
    cout << s;
}