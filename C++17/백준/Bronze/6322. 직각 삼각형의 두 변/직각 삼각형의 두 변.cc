#include <iostream>
#include <cmath>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cout.precision(3);
    fixed(cout);

    int a, b, c; cin >> a >> b >> c;
    int n = 1;
    while(a != 0 && b != 0 && c != 0) {
        cout << "Triangle #" << n << '\n'; 
        if(a < 0) {
            if(c * c - b * b <= 0) cout << "Impossible.\n\n";
            else cout << "a = " << sqrt(c * c - b * b) << "\n\n";
        } else if(b < 0) {
            if(c * c - a * a <= 0) cout << "Impossible.\n\n";
            else cout << "b = " << sqrt(c * c - a * a) << "\n\n";
        } else {
            cout << "c = " << sqrt(a * a + b * b) << "\n\n";
        }
        n++;
        cin >> a >> b >> c;
    }
}