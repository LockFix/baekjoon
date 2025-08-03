#include <iostream>
#include <cmath>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long double a, b, c; cin >> a >> b >> c;
    (a * b / c > a / b * c) ? cout << (int)floor(a * b / c) : cout << (int)floor(a / b * c);
}