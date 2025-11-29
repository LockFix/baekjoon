#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int T; cin >> T;
    while(T--) {
        long long x; cin >> x;
        cout << 2 * x - 1 << '\n';
    }
}