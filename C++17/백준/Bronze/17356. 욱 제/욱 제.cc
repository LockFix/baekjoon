#include <iostream>
#include <cmath>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cout.precision(5);

    double a, b; cin >> a >> b;
    double M = (b - a) / 400.0;
    double percent = 1.0 / (1 + pow(10, M));
    cout << percent;
}   