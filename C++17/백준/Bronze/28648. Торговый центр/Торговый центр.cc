#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    short n; cin >> n;
    short min = __SHRT_MAX__;
    while(n--) {
        short t, l; cin >> t >> l;
        if(min > t + l) min = t + l;
    }
    cout << min;
}