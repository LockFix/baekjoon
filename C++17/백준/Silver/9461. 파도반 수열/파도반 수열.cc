#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int T; cin >> T;
    long long arr[100] = {1, 1, 1, 2, 2, 3, 4, 5, 7, 9};
    while(T--){
        int N; cin >> N;
        if(arr[N - 1] != 0) {
            cout << arr[N - 1] << '\n';
            continue;
        }
        for(int i = 9; i < N; i++) {
            arr[i] = arr[i - 5] + arr[i - 1];
        }
        cout << arr[N - 1] << '\n';
    }
}   