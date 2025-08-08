#include <iostream>
#include <map>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N; cin >> N;
    map<int, int> arr;
    int max = 0;
    for(int i = 0; i < N; i++) {
        int temp; cin >> temp;
        while(temp % 2 != 1) {
            temp /= 2;
        }
        arr[temp]++;
        if(max < arr[temp]) max = arr[temp];
    }
    cout << max;
}