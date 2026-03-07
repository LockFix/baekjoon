#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    short n, a, b; cin >> n >> a >> b;

    short good = 1, bad = 1;
    while(n--) {
        good += a;
        bad += b;

        if(good < bad) {
            short tmp = good;
            good = bad;
            bad = tmp;
        } else if(good == bad) bad--;
    }
    cout << good << ' ' << bad;
}