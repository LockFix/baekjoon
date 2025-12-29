#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N; cin >> N;

    for(int i = 0; i < N; i++) {
        if(i % 3 == 2) cout << 'H';
        else cout << 'S';
    }
}