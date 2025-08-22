#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N; cin >> N;
    long long result = 1;
    for(int i = 2; i <= N; i++) result *= i;
    cout << result / (7 * 24 * 60 * 60);
}   