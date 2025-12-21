#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int i; cin >> i;
    int sum = 0;
    for(int j = 1; j <= i; j++) {
        if(i % j == 0) sum += j;
    }
    cout << sum;
}