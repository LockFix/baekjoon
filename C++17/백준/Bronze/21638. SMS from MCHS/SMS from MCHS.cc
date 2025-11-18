#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    short nt, nw, tt, tw; cin >> nt >> nw >> tt >> tw;
    if(tt < 0 && tw >= 10) cout << "A storm warning for tomorrow! Be careful and stay home if possible! ";
    else if(tt < nt) cout << "MCHS warns! Low temperature is expected tomorrow. ";
    else if(tw > nw) cout << "MCHS warns! Strong wind is expected tomorrow. ";
    else cout << "No message ";
}