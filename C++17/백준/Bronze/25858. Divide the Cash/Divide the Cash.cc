#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    short n, d; cin >> n >> d;
    short arr[n];
    short sum = 0;
    for(short i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
    for(short i = 0; i < n; i++) cout << d / sum * arr[i] << '\n';
}