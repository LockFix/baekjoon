#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    short a, b, c, d; cin >> a >> b >> c >> d;

    if(a + b <= d && c <= d) {
        cout << "~.~";
    } else if(a + b > d && c > d) {
        cout << "T.T";
    } else if(a + b <= d) {
        cout << "Shuttle";
    } else {
        cout << "Walk";
    }
}