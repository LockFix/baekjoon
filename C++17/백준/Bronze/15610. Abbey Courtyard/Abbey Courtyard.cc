#include <iostream>
#include <cmath>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long s; cin >> s;
    fixed(cout);

    cout << 4 * sqrt(s);
}