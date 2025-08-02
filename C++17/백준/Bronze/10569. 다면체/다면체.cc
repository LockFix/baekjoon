#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int T; cin >> T;
    while(T--) {
        int V, E; cin >> V >> E;
        cout << E + 2 - V << '\n';
    }
}
