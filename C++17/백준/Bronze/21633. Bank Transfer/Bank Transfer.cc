#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cout.precision(2);
    fixed(cout);
    double k; cin >> k;

    double result = 0.01 * k + 25;
    if(result >= 2000) cout << "2000.00";
    else if(result <= 100) cout << "100.00";
    else cout << result;

}