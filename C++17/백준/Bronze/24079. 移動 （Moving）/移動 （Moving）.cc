#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    short X, Y, Z; cin >> X >> Y >> Z;

    if(X + Y <= Z) cout << 1;
    else cout << 0;
}