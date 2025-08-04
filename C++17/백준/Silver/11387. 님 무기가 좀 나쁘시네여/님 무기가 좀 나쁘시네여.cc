#include <iostream>
#include <cmath>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long cried[5];
    long long pabued[5];
    long long ca[5];
    long long pa[5];

    for(int i = 0; i < 5; i++) {
        cin >> cried[i];
    }
    for(int i = 0; i < 5; i++) {
        cin >> pabued[i];
    }
    for(int i = 0; i < 5; i++) {
        cin >> ca[i];
    }
    for(int i = 0; i < 5; i++) {
        cin >> pa[i];
    }
    long long cri = cried[0] * (100 + cried[1]) * ((100 - min(cried[2], 100ll)) * 100 + min(cried[2], 100ll) * cried[3]) * (100 + cried[4]);
    long long pabu = pabued[0] * (100 + pabued[1]) * ((100 - min(pabued[2], 100ll)) * 100 + min(pabued[2], 100ll) * pabued[3]) * (100 + pabued[4]);

    long long cri2 = (cried[0] - ca[0] + pa[0]) * (100 + (cried[1] - ca[1] + pa[1])) * ((100 - min((cried[2] - ca[2] + pa[2]), 100ll)) * 100 + min((cried[2] - ca[2] + pa[2]), 100ll) * (cried[3] - ca[3] + pa[3])) * (100 + (cried[4] - ca[4] + pa[4]));
    long long pabu2 = (pabued[0] - pa[0] + ca[0]) * (100 + (pabued[1] - pa[1] + ca[1])) * ((100 - min((pabued[2] - pa[2] + ca[2]), 100ll)) * 100 + min((pabued[2] - pa[2] + ca[2]), 100ll) * (pabued[3] - pa[3] + ca[3])) * (100 + (pabued[4] - pa[4] + ca[4]));

    if(cri > cri2) cout << "-\n";
    else if(cri < cri2) cout << "+\n"; 
    else cout << "0\n";
    if(pabu > pabu2) cout << '-';
    else if(pabu < pabu2) cout << '+';
    else cout << '0';
}