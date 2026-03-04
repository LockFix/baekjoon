#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    short n; cin >> n;

    if(n % 2 == 0) cout << 2;
    else cout << 1;
}