#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    short n, m; cin >> n >> m;

    if(n - 7 <= 0) cout << m + 7;
    else cout << n - 7;
}