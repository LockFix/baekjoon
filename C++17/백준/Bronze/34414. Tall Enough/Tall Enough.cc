#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    short n; cin >> n;
    while(n--) {
        short a; cin >> a;

        if(a < 48) {
            cout << "False";
            return 0;
        }
    }
    cout << "True";
}