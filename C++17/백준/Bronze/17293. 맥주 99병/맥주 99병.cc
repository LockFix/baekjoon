#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N; cin >> N;
    for(int i = N; i >= 0; i--) {
        if(i == 0) {
            cout << "No more bottles of beer on the wall, no more bottles of beer.\n";
            if(N == 1) cout << "Go to the store and buy some more, 1 bottle of beer on the wall.";
            else cout << "Go to the store and buy some more, " << N << " bottles of beer on the wall.";
            break;
        }
        if(i == 2) {
            cout << "2 bottles of beer on the wall, 2 bottles of beer.\n";
            cout << "Take one down and pass it around, 1 bottle of beer on the wall.\n\n";
            continue;
        }
        if(i == 1) {
            cout << "1 bottle of beer on the wall, 1 bottle of beer.\n";
            cout << "Take one down and pass it around, no more bottles of beer on the wall.\n\n";
            continue;
        }
        cout << i << " bottles of beer on the wall, " << i << " bottles of beer.\n";
        cout << "Take one down and pass it around, " << i - 1 << " bottles of beer on the wall.\n\n";
    }
}   