#include <iostream>
using namespace std;

long long memory[1000001];

long long dp(int x) {
    if(x == 1) return 1;
    if(x == 2) return 2;
    if(x == 3) return 4;
    if(memory[x] != 0) return memory[x];
    return memory[x] = (dp(x - 1) + dp(x - 2) + dp(x - 3)) % 1000000009;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int T; cin >> T;
    while(T--){
        int n; cin >> n;
        cout << dp(n) << '\n';
    }
}   