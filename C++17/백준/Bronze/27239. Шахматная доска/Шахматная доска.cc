#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    short n; cin >> n;
    if(n % 8 == 1) cout << 'a';
    else if(n % 8 == 2) cout << 'b';
    else if(n % 8 == 3) cout << 'c';
    else if(n % 8 == 4) cout << 'd';
    else if(n % 8 == 5) cout << 'e';
    else if(n % 8 == 6) cout << 'f';
    else if(n % 8 == 7) cout << 'g';
    else cout << 'h';
    cout << (n % 8 == 0 ? n / 8 : n / 8 + 1);
}