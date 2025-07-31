#include <iostream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n; cin >> n;
    for(int i = 1; i <= n; i++) {
        cout << "Scenario #" << i << ":\n";
        int a, b, c; cin >> a >> b >> c;
        if((a * a == b * b + c * c) || (b * b == a * a + c * c) || (c * c == a * a + b * b)) cout << "yes\n\n";
        else cout << "no\n\n";
    }
}