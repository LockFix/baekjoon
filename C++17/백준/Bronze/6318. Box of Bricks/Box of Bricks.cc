#include <iostream>
#include <cmath>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n; cin >> n;
    int index = 1;
    while(n != 0) {
        int arr[n];
        int sum = 0;
        int average = 0;
        for(int i = 0; i < n; i++) {
            int temp; cin >> temp;
            arr[i] = temp;
            sum += temp;
        }
        average = sum / n;
        sum = 0;
        for(int i = 0; i < n; i++) {
            sum += abs(arr[i] - average);
        }
        sum /= 2;
        cout << "Set #" << index << '\n' << "The minimum number of moves is " << sum << ".\n\n";
        index++;
        cin >> n;
    }
}