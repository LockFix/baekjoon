#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    double x, y; cin >> x >> y;
    while(!(x == 0 && y == 0)) {
        if(x == 0) cout << "AXIS\n";
        else if(y == 0) cout << "AXIS\n";
        else if(x < 0) {
            if(y > 0) {
                cout << "Q2\n";
            } else {
                cout << "Q3\n";
            }
        } else {
            if(y > 0) cout << "Q1\n";
            else cout << "Q4\n";
        }
        cin >> x >> y;
    }
    cout << "AXIS";
}
