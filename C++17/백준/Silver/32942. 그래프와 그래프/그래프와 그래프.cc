#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int a, b, c; cin >> a >> b >> c;
    if(b == 0) {
        for(short i = 1; i <= 10; i++) {
            if(c - i * a == 0) cout << "1 2 3 4 5 6 7 8 9 10\n";
            else cout << "0\n";
        }
        return 0;
    }
    for(short i = 1; i <= 10; i++) {
        if((c - i * a) % b != 0 || (c - i * a) / b < 0 || (c - i * a) / b > 10) cout << "0\n";
        else cout << (c - i * a) / b << '\n';
    }
}