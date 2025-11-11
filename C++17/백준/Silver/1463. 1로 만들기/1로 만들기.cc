#include <iostream>

using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N; cin >> N;
    int arr[N + 1];
    arr[2] = 1;
    arr[1] = 0;
    for(int i = 3; i <= N; i++) {
       arr[i] = 1 + min((i % 3 == 0 ? arr[i / 3] : 2147000000), min((i % 2 == 0 ? arr[i / 2] : 2147000000), arr[i - 1]));
    }
    cout << arr[N];
}