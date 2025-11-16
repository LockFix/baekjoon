#include <iostream>
#include <cmath>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int T; cin >> T;
    while(T--) {
        pair<short, short> start, end;
        short tmp, temp; cin >> tmp >> temp; start = {tmp, temp};
        cin >> tmp >> temp; end = {tmp, temp};

        short n; cin >> n;
        short cnt = 0;
        while(n--) {
            short x, y, r; cin >> x >> y >> r;
            
            if((sqrt(pow(x - start.first, 2) + pow(y - start.second, 2)) < r) ^ (sqrt(pow(x - end.first, 2) + pow(y - end.second, 2)) < r)) {
                cnt++;
            }
        }
        cout << cnt << '\n';
    }
}