#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    short x, y; cin >> x >> y;
    while(x != 0 || y != 0) {
        if(x + y == 13) cout << "Never speak again.\n";
        else if(x > y) cout << "To the convention.\n";
        else if(x == y) cout << "Undecided.\n";
        else cout << "Left beehind.\n";
        cin >> x >> y;
    }
}