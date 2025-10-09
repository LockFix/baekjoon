#include <iostream>
#include <cmath>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    short n, m, k, a, b, c; cin >> n >> m >> k >> a >> b >> c;
    int j, r, s;
    j = n * a;
    r = m * b;
    s = k * c;

    int M = max(j, max(r, s));
    if(M == j) cout << "Joffrey ";
    if(M == r) cout << "Robb ";
    if(M == s) cout << "Stannis";
}