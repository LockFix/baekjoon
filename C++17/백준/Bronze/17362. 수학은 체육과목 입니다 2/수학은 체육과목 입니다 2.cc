#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int n; cin >> n;

    if(n % 8 == 1) cout << 1;
    else if(n % 8 == 0 || n % 8 == 2) cout << 2;
    else if(n % 8 == 3 || n % 8 == 7) cout << 3;
    else if(n % 8 == 4 || n % 8 == 6) cout << 4;
    else cout << 5;
}