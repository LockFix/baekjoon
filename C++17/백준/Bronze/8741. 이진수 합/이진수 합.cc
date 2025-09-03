#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int k; cin >> k;
    for(int i = 0; i < k; i++) cout << 1;
    for(int i = 0; i < k - 1; i++) cout << 0;
}   