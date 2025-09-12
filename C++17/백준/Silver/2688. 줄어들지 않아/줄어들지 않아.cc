#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int T; cin >> T;
    long long arr[65][10] = {0};
    for(int i = 1; i <= 10; i++) {
        arr[1][i - 1] = i;
    }
    while(T--) {
        int n; cin >> n;
        if(arr[n][9] != 0) {
            cout << arr[n][9] << '\n';
            continue;
        }
        for(int i = 1; i <= n; i++) {
            if(arr[i][9] != 0) continue;
            long long temp = 0;
            for(int j = 0; j < 10; j++) temp += arr[i - 1][j];
            arr[i][9] = temp;
            for(int j = 8; j >= 0; j--) {
                arr[i][j] = temp - arr[i - 1][j + 1];
                temp -= arr[i - 1][j + 1];
            }
        }
        cout << arr[n][9] << '\n';
    }
}  