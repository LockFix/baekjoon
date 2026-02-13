#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    short N; cin >> N;

    if(N == 1) {
        cout << 'A';
        return 0;
    }

    short arr[N];
    for(short i = 0; i < N; i++) cin >> arr[i];
    bool flag = true;
    for(short i = 1; i < N; i++) {
        if(arr[i - 1] != arr[i]) {
            flag = false;
            break;
        }
    }
    if(flag) {
        cout << arr[0];
        return 0;
    } else if(N == 2) {
        cout << 'A';
        return 0;
    }
    
    short a, b;
    if(arr[0] - arr[1] == 0) {
        cout << 'B';
        return 0;
    }
    if((arr[1] - arr[2]) % (arr[0] - arr[1]) != 0) {
        cout << 'B';
        return 0;
    }
    a = (arr[1] - arr[2]) / (arr[0] - arr[1]);
    b = arr[1] - (arr[0] * a);

    for(short i = 1; i < N; i++) {
        if(arr[i - 1] * a + b != arr[i]) {
            cout << 'B';
            return 0;
        }
    }
    cout << arr[N - 1] * a + b;
}