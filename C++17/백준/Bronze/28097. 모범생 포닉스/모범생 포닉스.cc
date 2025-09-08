#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N; cin >> N;
    int sum = 8 * (N - 1);
    for(int i = 0; i < N; i++) {
        int temp; cin >> temp;
        sum += temp;
    }
    cout << sum / 24 << ' ' << sum % 24;
}   