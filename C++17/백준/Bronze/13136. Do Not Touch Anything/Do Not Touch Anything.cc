#include <iostream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long R, C, N; cin >> R >> C >> N;
    if(R % N == 0) {
        R /= N;
    } else {
        R /= N;
        R++;
    }
    if(C % N == 0) {
        C /= N;
    } else {
        C /= N;
        C++;
    }
    cout << R * C;
}