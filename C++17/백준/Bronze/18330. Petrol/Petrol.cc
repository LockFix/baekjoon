#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    short n, k; cin >> n >> k;
    cout << (n - k - 60 <= 0 ? n * 1500 : (n - k - 60) * 3000 + (k + 60) * 1500); 
}