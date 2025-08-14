#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int A, B; cin >> A >> B;
    string C; cin >> C;
    int result = A ^ B;
    if((C[C.size() - 1] - '0' ) % 2 == 0) result ^= B;
    cout << result;
}   