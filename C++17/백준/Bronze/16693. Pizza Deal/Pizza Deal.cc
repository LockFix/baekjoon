#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    double A, P1, R, P2; cin >> A >> P1 >> R >> P2;
    if(A / P1 > R * R * 3.1415926535897932 / P2) cout << "Slice of pizza";
    else cout << "Whole pizza";
}