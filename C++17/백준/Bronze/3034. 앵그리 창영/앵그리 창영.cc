#include <iostream>
#include <cmath>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, w, h; cin >> n >> w >> h;

    short c = sqrt(w * w + h * h);
    while(n--) {
        short tmp; cin >> tmp;
        if(c >= tmp) cout << "DA\n";
        else cout << "NE\n";
    }
}