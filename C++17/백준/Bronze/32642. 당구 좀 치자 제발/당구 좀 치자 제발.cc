#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N; cin >> N;

    long long rage = 0;
    long long result = 0;

    while(N--) {
        short w; cin >> w;

        if(w) rage++;
        else rage--;
        result += rage;
    }
    cout << result;
}