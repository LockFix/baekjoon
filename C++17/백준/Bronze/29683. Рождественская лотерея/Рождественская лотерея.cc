#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    short n, k; cin >> n >> k;

    int r = 0;
    while(n--) {
        short t; cin >> t;

        r += t / k;
    }
    cout << r;
}