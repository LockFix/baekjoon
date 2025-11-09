#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int n; cin >> n;
    long long sum = 0;
    long long pre = 0;
    int arr[n];
    for(int i = 0; i < n; i++) {
        int tmp; cin >> tmp;
        arr[i] = tmp;
        pre += tmp;
    } 
    sort(arr, arr + n);
    for(int i = n - 1; i >= 0; i--) {
        pre -= arr[i];
        sum += (long long)i * arr[i] - pre;
    }
    cout << sum * 2;
}