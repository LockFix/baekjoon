#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    short n; cin >> n;

    if(n == 1 || (n <= 18 && n % 2 == 0) || (n <= 27 && n % 3 == 0) || (n <= 36 && n % 4 == 0) || (n <= 45 && n % 5 == 0) || (n <= 54 && n % 6 == 0) || (n <= 63 && n % 7 == 0) || (n <= 72 && n % 8 == 0) || (n <= 81 && n % 9 == 0)) {
        cout << 1;
    } else cout << 0;
}