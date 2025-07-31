#include <iostream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int T; cin >> T;
    while(T--) {
        int L, R, S; cin >> L >> R >> S;
        if(S - L <  R - S) {
            cout << (S - L) * 2 + 1 << '\n';
        } else {
            cout << (R - S) * 2 << '\n';
        }
    }
}