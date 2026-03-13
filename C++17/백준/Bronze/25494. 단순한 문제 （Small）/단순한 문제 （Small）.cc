#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    short T; cin >> T;

    while(T--) {
        short a, b, c; cin >> a >> b >> c;
        int result = 0;
        for(int i = 1; i <= a; i++) {
            for(int j = 1; j <= b; j++) {
                for(int k = 1; k <= c; k++) {
                    if((i % j) == (j % k) && (j % k) == (k % i)) result++;
                }
            }
        }
        cout << result << '\n';
    }
}