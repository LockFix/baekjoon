#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    short A, B; cin >> A >> B;
    cout << ((A + B) % 12 == 0 ? 12 : (A + B) % 12);
}