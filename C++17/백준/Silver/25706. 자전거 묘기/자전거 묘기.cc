#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N; cin >> N;
    int arr[N];
    int count[N];
    for(int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    count[N - 1] = 1;
    for(int i = N - 2; i >= 0; i--) {
        if(i + arr[i] + 1 > N - 1) {
            count[i] = 1;
            continue;
        }
        count[i] = count[i + arr[i] + 1] + 1;
    }
    for(int i = 0; i < N; i++) cout << count[i] << " ";
}