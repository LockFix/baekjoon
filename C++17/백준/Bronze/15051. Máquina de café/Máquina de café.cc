#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    short a, b, c; cin >> a >> b >> c;

    short one = a * 4 + b * 2;
    short two = a * 2 + c * 2;
    short three = b * 2 + c * 4;
    
    cout << min(one, min(two, three));
}