#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    short S; cin >> S;
    short m, f, m1; cin >> m >> f >> m1;
    if(S <= 240 || S <= m + f + m1) cout << "high speed rail";
    else cout << "flight";
}