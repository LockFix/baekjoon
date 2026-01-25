#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    short a, b, c, d, e, f; cin >> a >> b >> c >> d >> e >> f;
    short g, h, i, j, k, l; cin >> g >> h >> i >> j >> k >> l;

    double sumone = a * 13 + b * 7 + c * 5 + d * 3 + e * 3 + f * 2;
    double sumtwo = g * 13 + h * 7 + i * 5 + j * 3 + k * 3 + l * 2 + 1.5;
    
    if(sumone > sumtwo) cout << "cocjr0208";
    else cout << "ekwoo"; 
}