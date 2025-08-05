#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, m; cin >> n >> m;
    int arr[n - 1][2];
    
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < 2; j++) {
            arr[i][j] = i + j;
        }
    }
    for(int i = 0; i < m - 1; i++) {
        arr[i + 1][0] = 1;
    }
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < 2; j++) {
            cout << arr[i][j] << ' ';
        }
        cout << '\n';
    }

}