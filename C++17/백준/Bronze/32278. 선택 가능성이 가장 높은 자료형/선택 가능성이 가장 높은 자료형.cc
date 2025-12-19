#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long N; cin >> N;
    if(N >= INT16_MIN && N <= INT16_MAX) cout << "short";
    else if(N >= INT32_MIN && N <= INT32_MAX) cout << "int";
    else cout << "long long";
}