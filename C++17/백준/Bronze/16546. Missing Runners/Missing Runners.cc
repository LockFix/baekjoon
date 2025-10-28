#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N; cin >> N;
    bool arr[N + 1] = {false};

    for(int i = 0; i < N - 1; i++) {
        int tmp; cin >> tmp;
        arr[tmp] = true;
    }
    for(int i = 1; i <= N; i++) {
        if(arr[i] == false) {
            cout << i;
            break;
        }
    }
}