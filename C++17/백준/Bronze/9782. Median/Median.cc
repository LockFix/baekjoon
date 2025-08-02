#include <iostream>
#include <cmath>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    
    
    double arr[101];
    int n;
    int index = 1;
    while(cin >> n, n != 0) {
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cout << fixed;
        cout.precision(1);
        if(n % 2 == 0) {
            cout << "Case " << index << ": " << floor((arr[n / 2 - 1] + arr[n / 2]) / 2 * 10) / 10 << '\n';
        } else {
            cout << "Case " << index << ": " << arr[n / 2] << '\n';
        } 
        index++;
    }
}
