#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N, A, B; cin >> N >> A >> B;
    A /= 2;
    if(A + B >= N) cout << N;
    else cout << A + B;
}   