#include <iostream>
#include <cmath>
using namespace std;

#define PI 3.1415926

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n; cin >> n;
    while(n--) {
        double a, r, p1, p2; cin >> a >> p1 >> r >> p2;
        if(a / p1 < (r * r * PI) / p2) cout << "Whole pizza\n";
        else cout << "Slice of pizza\n";
    }
}  