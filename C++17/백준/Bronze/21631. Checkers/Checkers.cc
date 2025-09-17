#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long a, b; cin >> a >> b;
    if(b == 0) cout << 0;
    else if(a + 1 >= b) cout << b;
    else cout << a + 1;
}