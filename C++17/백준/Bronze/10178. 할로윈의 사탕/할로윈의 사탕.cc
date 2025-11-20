#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int N; cin >> N;
    while(N--) {
        short c, v; cin >> c >> v;

        cout << "You get " << c / v <<  " piece(s) and your dad gets " << c % v << " piece(s).\n";
    }
}