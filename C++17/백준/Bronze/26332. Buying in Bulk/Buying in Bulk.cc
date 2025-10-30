#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n; cin >> n;
    while(n--) {
        short c, p; cin >> c >> p;
        short sum = p;
        cout << c << ' ' << p << '\n';

        if(c >= 2) {
            c--;
            while(c--) {
                sum += p - 2;
            }
        }
        cout << sum << '\n';
    }
}