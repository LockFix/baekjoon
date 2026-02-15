#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    short N, K; cin >> N >> K;

    bool check[N + 2] = {false, };

    short count = 0;

    for(short i = 2; i <= N; i++) {
        if(check[i]) continue;
        check[i] = true;
        count++;
        if(count == K) {
            cout << i;
            return 0;
        }

        for(short j = i + i; j <= N; j += i) {
            if(check[j]) continue;
            check[j] = true;
            count++;
            if(count == K) {
                cout << j;
                return 0;
            }
        }
    }
}