#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n; cin >> n;
    while(n--) {
        string tmp;
        int i, j; cin >> tmp >> i >> j;
        tmp.erase(i, j - i);
        cout << tmp << '\n';
    }
}