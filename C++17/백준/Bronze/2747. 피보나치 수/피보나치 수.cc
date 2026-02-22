#include <iostream>

using namespace std;

int fib(short n) {
    if(n == 2) return 1;
    if(n == 3) return 2;
    return fib(n - 1) + fib(n - 2);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    short n; cin >> n;
    if(n == 1) cout << 1;
    else cout << fib(n);
}