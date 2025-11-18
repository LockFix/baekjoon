#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    short N; cin >> N;
    short arr[N];
    for(short i = 0; i < N; i++) cin >> arr[i];
    short M; cin >> M;
    int sum = 0;
    while(M--) {
        short temp; cin >> temp;
        sum += arr[temp - 1];
    }
    cout << sum;
}