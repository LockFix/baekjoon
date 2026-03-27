#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, h, v; cin >> n >> h >> v;
    int a = max(n - h, h);
    int b = max(n - v, v);

    cout << 4 * a * b;
}