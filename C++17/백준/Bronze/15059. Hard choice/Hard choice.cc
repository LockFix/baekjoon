#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    short a, b, c, d, e, f; cin >> a >> b >> c >> d >> e >> f;

    short t, tmp, temp;
    t = (a >= d ? 0 : d - a);
    tmp = (b >= e ? 0 : e - b);
    temp = (c >= f ? 0 : f - c);

    cout << t + tmp + temp;
}