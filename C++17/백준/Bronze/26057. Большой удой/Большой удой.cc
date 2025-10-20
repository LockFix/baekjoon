#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int L, T; cin >> L >> T;
    cout << T - (L - T);
}