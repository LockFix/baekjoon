#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    short T; cin >> T;
    while(T--) {
        short G, C, E; cin >> G >> C >> E;
        if(C >= E) {
            cout << "0\n";
            continue;
        }
        if(G == 2) G = 3;
        else if(G == 3) G = 5;

        cout << (E - C) * G << '\n';
    }
}