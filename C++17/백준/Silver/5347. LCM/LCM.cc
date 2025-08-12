#include <iostream>
using namespace std;

long long gcd(int a, int b) {
    if(b == 0) return a;
    return gcd(b, a % b);
}

long long lcm(long a, long b) {
    long long g = gcd(a, b);
    return g * (a / g) * (b / g);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N; cin >> N;
    while(N--) {
        int a, b; cin >> a >> b;
        cout << lcm(a, b) << '\n';
    }
}   