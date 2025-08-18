#include <iostream>
using namespace std;
long long c;
long long multiply(long long a, long long b) {
    if(b == 1) return a % c;
    long long result = multiply(a, b / 2);
    if(b % 2 == 0) return result * result % c;
    return result * result % c * a % c;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long a, b; cin >> a >> b >> c;
    cout << multiply(a, b) % c;
}   