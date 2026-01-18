#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    short a, b; cin >> a >> b;

    short tmp = a - b;

    if(abs(tmp) == 180) cout << 180;
    else if(tmp > 0) {
        if(tmp > 180) cout << 360 - tmp;
        else cout << -tmp;
    }
    else {
        if(tmp < -180) cout << -(360 + tmp);
        else cout << -tmp;
    }
}