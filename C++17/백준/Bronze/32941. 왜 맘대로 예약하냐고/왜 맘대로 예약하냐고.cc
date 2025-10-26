#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    bool flag = true;
    short T, X, N; cin >> T >> X >> N;
    while(N--) {
        short K; cin >> K;
        bool tmp = false;
        while(K--) {
            short k; cin >> k;
            if(k == X) tmp = true;
        }
        if(!tmp) flag = false;
    }
    if(flag) cout << "YES";
    else cout << "NO";
}