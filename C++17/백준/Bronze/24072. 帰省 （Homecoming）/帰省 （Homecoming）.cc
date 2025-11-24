#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    short a, b, c; cin >> a >> b >> c;
    if(c >= a && c < b) cout << 1;
    else cout << 0;
}