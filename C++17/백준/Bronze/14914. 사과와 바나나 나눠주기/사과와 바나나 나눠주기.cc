#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    short a, b; cin >> a >> b;

    for(int i = 1; i <= min(a, b); i++) {
        if(a % i != 0 || b % i != 0) continue;
        cout << i << ' ' << a / i << ' ' << b / i << '\n';
    }
}