#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n; cin >> n;
    short arr[n];
    int sum = 0;
    long long result = 0;

    for(int i = 0; i < n; i++) {
        short tmp; cin >> tmp;
        sum += tmp;
        arr[i] = tmp;
    }

    sort(arr, arr + n);
    for(int i = 0; i < n; i++) {
        sum -= arr[i];
        result += arr[i] * sum;
    }
    cout << result;
}