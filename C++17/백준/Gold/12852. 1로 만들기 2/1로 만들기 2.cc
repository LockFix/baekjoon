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
        arr[i] = arr[i - 1];
        if(i % 3 == 0) arr[i] = min(arr[i], arr[i / 3]);
        if(i % 2 == 0) arr[i] = min(arr[i], arr[i / 2]);
        arr[i]++;
    }
    cout << arr[N] << '\n';
    int index = N;
    for(int i = 0; i <= arr[N]; i++) {
        cout << index << ' ';
        int tmp = arr[index - 1];
        int temp = index - 1;
        if(index % 3 == 0) {
            if(tmp > arr[index / 3]) {
                tmp = arr[index / 3];
                temp = index / 3;
            }
        }
        if(index % 2 == 0) {
            if(tmp > arr[index / 2]) {
                tmp = arr[index / 2];
                temp = index / 2;
            }
        }
        index = temp;
    }
}