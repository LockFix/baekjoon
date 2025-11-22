#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    short N; cin >> N;
    for(short i = 0; i < N * 4; i++) {
        for(short j = 0; j < N; j++) cout << '@';
        cout << '\n';
    }
    for(short i = 0; i < N; i++) {
        for(short j = 0; j < N * 5; j++) cout << '@';
        cout << '\n';
    }
}