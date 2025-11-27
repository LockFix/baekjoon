#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int S, A, B; cin >> S >> A >> B;
    S -= A;
    if(S <= 0) cout << 250;
    else cout << (S % B == 0 ? S / B * 100 + 250 : (S / B + 1) * 100 + 250);
}