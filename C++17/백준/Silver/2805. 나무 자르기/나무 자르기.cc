#include <iostream>

using namespace std;

int solve(int arr[], int h, int s, int e, int N, int M) {
    long long take = 0;
    for(int i = 0; i < N; i++) take += (arr[i] - h <= 0 ? 0 : arr[i] - h);
    if(take == M || (h == e)) {
        return h;
    }
    if(take < M) {
        return solve(arr, (h + e) / 2, h, e, N, M);
    }
    return solve(arr, (h + s) / 2, s, h, N, M);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int N, M; cin >> N >> M;    
    int arr[N];
    int max = 0;
    for(int i = 0; i < N; i++) {
        int temp; cin >> temp;
        if(temp > max) max = temp;
        arr[i] = temp;
    }
    cout << solve(arr, max / 2, max, 0, N, M);
}