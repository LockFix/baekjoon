#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N, M, K; cin >> N >> M >> K;
    int o = M;
    int x = N - M;
    int backO = K;
    int backX = N - K;

    (o > backO) ? o = backO : o;
    (x > backX) ? x = backX : x;

    cout << o + x;
}