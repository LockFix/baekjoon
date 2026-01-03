#include <iostream>

using namespace std;

int gcd(int a, int b) {
    if(a % b == 0) return b;
    return gcd(b, a % b);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N; cin >> N;

    int arr[N];
    int list[N - 1];
    for(int i = 0; i < N; i++) cin >> arr[i];

    for(int i = 1; i < N; i++) {
        list[i - 1] = arr[i] - arr[i - 1];
    }

    int gc = list[0];
    for(int i = 1; i < N - 1; i++) {
        gc = gcd(gc, list[i]);
    }
    int count = 0;
    for(int i = 0; i < N - 1; i++) {
        count += list[i] / gc - 1;
    }
    cout << count;
}