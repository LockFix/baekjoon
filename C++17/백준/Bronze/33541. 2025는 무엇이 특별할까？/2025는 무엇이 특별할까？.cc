#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N; cin >> N;
    for(int i = N + 1; i <= 9999; i++) {
        if((i / 100 + i % 100) * (i / 100 + i % 100) == i) {
            cout << i;
            return 0;
        }
    }
    cout << -1;
}   