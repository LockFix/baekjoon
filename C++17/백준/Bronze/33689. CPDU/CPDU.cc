#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    short N; cin >> N;
    short count = 0;
    while(N--) {
        string s; cin >> s;
        if(s[0] == 'C') {
            count++;
        }
    }
    cout << count;
}