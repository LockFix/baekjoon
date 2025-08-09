#include <iostream>
using namespace std;

int memory[1001];

int dp(int x) {
    if(x == 1) return 1;
    if(x == 2) return 2;
    if(memory[x] != 0) return memory[x];
    return memory[x] = (dp(x - 1) + dp(x - 2)) % 10007;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N; cin >> N;
    cout << dp(N);
}   