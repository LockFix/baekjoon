#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    short n, T; cin >> n >> T;

    short count = 0;
    short ans = 0;
    while(n--) {
        short tmp; cin >> tmp;
        count += tmp;
        if(count > T) {
            cout << ans;
            return 0;
        }
        ans++;
    }
    cout << ans;
}