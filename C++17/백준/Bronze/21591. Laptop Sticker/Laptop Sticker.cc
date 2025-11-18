#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    short w1, h1, w2, h2; cin >> w1 >> h1 >> w2 >> h2;
    if(w1 - 2 < w2 || h1 - 2 < h2) cout << 0;
    else cout << 1;
}