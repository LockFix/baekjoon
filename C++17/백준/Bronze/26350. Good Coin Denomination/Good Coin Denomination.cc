#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    short t; cin >> t;
    while(t--) {
        short n; cin >> n;
        short pre; cin >> pre;
        bool flag = true;
        short arr[n] = {pre, };
        for(short i = 1; i < n; i++) {
            short tmp; cin >> tmp;
            arr[i] = tmp;
            if(tmp < 2 * pre) flag = false;
            pre = tmp;
        }
        cout << "Denominations: ";
        for(short i : arr) cout << i << ' ';
        if(flag) cout << "\nGood coin denominations!\n\n";
        else cout << "\nBad coin denominations!\n\n";
    }
}