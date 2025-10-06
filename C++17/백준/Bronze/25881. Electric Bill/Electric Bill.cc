#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    short a, b; cin >> a >> b;
    int n; cin >> n;
    while(n--) {
        int temp; cin >> temp;
        cout << temp << ' ';
        if(temp <= 1000) cout << temp * a << '\n';
        else {
            int sum = 1000 * a;
            temp -= 1000;
            sum += temp * b;
            cout << sum << '\n';
        }
    }
}