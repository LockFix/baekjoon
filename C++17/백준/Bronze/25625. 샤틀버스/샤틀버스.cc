#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    short x, y; cin >> x >> y;

    if(y >= x) cout << y - x;
    else cout << x + y; 
}