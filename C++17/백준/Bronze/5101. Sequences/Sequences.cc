#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int a, b, c; cin >> a >> b >> c;
    while(!(a == 0 && b == 0 && c == 0)) {
        int count = 1;
        if((b < 0 && c > a) || (b > 0 && c < a)) {
            cout << "X\n";
            cin >> a >> b >> c;
            continue;
        }
        if(b > 0)
            for(; a < c; a += b) count++;
        else
            for(; a > c; a += b) count++;
        if(a != c) {
            cout << "X\n";
            cin >> a >> b >> c;
            continue;
        }
        cout << count << '\n';
        cin >> a >> b >> c;
    }
}