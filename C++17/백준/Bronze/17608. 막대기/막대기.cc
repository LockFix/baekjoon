#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n; cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    int r = 1;
    int M = arr[n - 1];
    for(int i = n - 1; i > 0; i--) {
        if(arr[i - 1] > M){
            r++;
            M = arr[i - 1];
        }
    }
    cout << r;
}