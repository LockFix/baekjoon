#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int a; cin >> a;
    while(a != 0) {
        if(a <= 1000000) cout << a << '\n';
        else if(a <= 5000000) cout << (int)(a * 0.9) << '\n';
        else cout << (int)(a * 0.8) << '\n';

        cin >> a;
    }
}