#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    short N; cin >> N;

    short a = -1;
    short b = -1;

    for(int i = 0; i < N; i++) {
        short x, y; cin >> x >> y;

        if(a > x || b > y) {
            cout << "no";
            return 0;
        }
        a = x;
        b = y;
    }
    cout << "yes";
}