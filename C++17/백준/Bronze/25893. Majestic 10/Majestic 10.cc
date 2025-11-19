#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int N; cin >> N;
    int a, b, c;
    while(N--) {
        cin >> a >> b >> c;
        int cnt = 0;
        if(a >= 10) cnt++;
        if(b >= 10) cnt++;
        if(c >= 10) cnt++;

        if(cnt == 3) cout << a << ' ' << b << ' ' << c << "\ntriple-double\n\n";
        else if(cnt == 2) cout << a << ' ' << b << ' ' << c << "\ndouble-double\n\n";
        else if(cnt == 1) cout << a << ' ' << b << ' ' << c << "\ndouble\n\n";
        else cout << a << ' ' << b << ' ' << c << "\nzilch\n\n";
    }
}