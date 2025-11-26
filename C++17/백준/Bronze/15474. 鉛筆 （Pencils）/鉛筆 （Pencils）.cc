#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    short n, a, b, c, d; cin >> n >> a >> b >> c >> d;
    int temp = (n % a == 0 ? (n / a) * b : (n / a + 1) * b);
    temp = min(temp, (n % c == 0 ? (n / c) * d : (n / c + 1) * d));
    cout << temp;
}