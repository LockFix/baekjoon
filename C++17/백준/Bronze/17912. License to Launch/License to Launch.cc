#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n; cin >> n;
    int index = 0;
    int amount = 1000000001;
    for(int i = 0; i < n; i++) {
        int temp; cin >> temp;
        if(temp < amount) {
            index = i;
            amount = temp;
        }
    }
    cout << index;
}