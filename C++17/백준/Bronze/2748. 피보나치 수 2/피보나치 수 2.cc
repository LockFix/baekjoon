#include <iostream>

using namespace std;

long long fib(short n) {
    if(n <= 2) return 1;

    long long a = 1, b = 1;
    for(short i = 3; i <= n; i++) {
        long long c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    short n; cin >> n;
    cout << fib(n);
}