#include <iostream>
#include <cmath>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N, P; cin >> N >> P;
    if(N >= 20) {
        if(P <= 2000) cout << 0;
        else cout << min(P * 75 / 100, P - 2000);
    } else if(N >= 15) {
        if(P <= 2000) cout << 0;
        else cout << min(P - 2000, P * 90 / 100);
    } else if(N >= 10) {
        if(P <= 500) cout << 0;
        else cout << min(P * 90 / 100, P - 500);
    } else if(N >= 5) {
        if(P <= 500) cout << 0;
        else cout << P - 500;
    } else cout << P;
}   