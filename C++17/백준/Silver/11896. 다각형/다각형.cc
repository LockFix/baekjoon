#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int a, b; cin >> a >> b;
    long long ans = 0;
    if(a <= 3) a = 4;
    for(int i = a; i <= b; i++) {
        if(i % 2 == 0) ans += i;
    }
    cout << ans;
}