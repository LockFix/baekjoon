#include <iostream>
#include <cmath>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    short A, B, K, X, m, M; cin >> A >> B >> K >> X;
    m = K - X;
    M = K + X;
    if(m < A && M < A) {
        cout << "IMPOSSIBLE";
        return 0;
    }
    M = min(M, B);
    m = max(m, A);
    cout << M - m + 1;
}