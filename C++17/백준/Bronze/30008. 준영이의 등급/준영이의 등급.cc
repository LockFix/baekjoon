#include <iostream>
#include <cmath>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    short N, K; cin >> N >> K;

    while(K--) {
        short G; cin >> G;

        short p = G * 100 / N;

        if(p >= 0 && p <= 4) cout << "1 ";
        else if(p > 4 && p <= 11) cout << "2 ";
        else if(p > 11 && p <= 23) cout << "3 ";
        else if(p > 23 && p <= 40) cout << "4 ";
        else if(p > 40 && p <= 60) cout << "5 ";
        else if(p > 60 && p <= 77) cout << "6 ";
        else if(p > 77 && p <= 89) cout << "7 ";
        else if(p > 89 && p <= 96) cout << "8 ";
        else cout << "9 ";
    }
}