#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int arr[4];
    for(int i = 0; i < 4; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + 4);
    int tA = arr[0] + arr[3];
    int tB = arr[1] + arr[2];
    cout << abs(tA - tB);
}