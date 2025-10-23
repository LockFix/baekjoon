#include <iostream>
#include <cmath>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cout.precision(10);
    fixed;

    short w, h; cin >> w >> h;
    cout << 2 * (w + h) - sqrt(w * w + h * h) - w - h;
}