#include <iostream>
#include <cmath>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    long long a; cin >> a;
    cout.precision(6);
    fixed(cout);

    cout << sqrt(a) * 4;
}