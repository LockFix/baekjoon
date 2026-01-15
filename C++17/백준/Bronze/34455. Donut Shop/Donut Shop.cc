#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int D; cin >> D;
    int E; cin >> E;

    while(E--) {
        char c; int a; cin >> c >> a;

        if(c == '+') {
            D += a;
        } else D -= a;
    }
    cout << D;
}