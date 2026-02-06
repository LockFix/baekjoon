#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
   //d = 1인 등차수열
    int N; short L; cin >> N >> L;

    for(; L <= 100; L++) {
        int right = N * 2 - L * (L - 1);
        if(right % (2 * L) != 0) continue;
        int a1 = right / (2 * L);
        if(a1 < 0) continue;
        for(short i = 0; i < L; i++) cout << a1 + i << ' ';
        return 0;
    }
    cout << -1;
}