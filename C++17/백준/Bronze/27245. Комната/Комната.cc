#include <iostream>
#include <cmath>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    double w, l, h; cin >> w >> l >> h;
    double m = min(w, l);
    double M = max(w, l);
    if(m / h >= 2 && M / m <= 2) cout << "good";
    else cout << "bad";
}