#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    short T; cin >> T;
    while(T--) {
        short N, A, D; cin >> N >> A >> D;

        int sum = 0;

        while(N--) {
            sum += A;
            A += D;
        }
        cout << sum << '\n';
    }
}