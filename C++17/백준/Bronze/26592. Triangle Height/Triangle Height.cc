#include <iostream>
#include <cmath>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cout.precision(2);
    cout << fixed;
    int n; cin >> n;
    while(n--) {
        double a, b; cin >> a >> b;
        
        cout << "The height of the triangle is " << a * 2 / b << " units\n";
    }
}