#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int x; cin >> x;
    if(x >= 13) cout << x + 1;
    else cout << x;
}