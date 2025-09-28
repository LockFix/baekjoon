#include <iostream>
#include <cmath>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cout.precision(1);
    cout << fixed;

    int n; cin >> n;
    while(n--) {
        double a, b; cin >> a >> b;
        cout << round(abs(a - b) * 10.0) / 10.0 << '\n';
    }
}