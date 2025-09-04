#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n; cin >> n;
    string s; cin >> s;
    int count = 0;
    for(int i = 0; i < n - 3; i++) {
        if(s[i] == 'p' && s[i + 1] == 'P' && s[i + 2] == 'A' && s[i + 3] == 'p') {
            count++;
            i += 3;
        }
    }
    cout << count;
}   