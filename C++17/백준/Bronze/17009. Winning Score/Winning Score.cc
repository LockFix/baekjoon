#include <iostream>
#include <cmath>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    short a, b, c, d, e, f; cin >> a >> b >> c >> d >> e >> f;
    short apple, banana;
    apple = a * 3 + b * 2 + c;
    banana = d * 3 + e * 2 + f;
    if(apple == banana) cout << 'T';
    else if(apple > banana) cout << 'A';
    else cout << 'B';
}