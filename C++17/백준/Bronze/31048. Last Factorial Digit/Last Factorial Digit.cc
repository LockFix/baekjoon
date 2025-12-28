#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    short T; cin >> T;

    while(T--) {
        short N; cin >> N;
        int result = 1;
        for(int i = 2; i <= N; i++) {
            result *= i;
        }
        cout << to_string(result)[to_string(result).length() - 1] << '\n';
    }
}