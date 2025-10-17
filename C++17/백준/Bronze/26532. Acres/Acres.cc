#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int a, b; cin >> a >> b;
    long long tmp = a * b;
    int one = 4840 * 5;
    if(tmp % one == 0) cout << tmp / one;
    else cout << tmp / one + 1;
}