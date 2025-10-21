#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long m, n; cin >> m >> n;
    if(m <= 2 || n <= 2) cout << m * n;
    else cout << (m + n) * 2 - 4;
}