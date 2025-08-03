#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int bY, bM, bD; cin >> bY >> bM >> bD;
    int nY, nM, nD; cin >> nY >> nM >> nD;

    if(nM < bM || (nM <= bM && nD < bD)) {
        if(nY == bY) cout << 0 << '\n';
        else cout << nY - bY - 1 << '\n';
    } else cout << nY - bY << '\n';
    cout << nY - bY + 1 << '\n' << nY - bY;
}