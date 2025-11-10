#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    short N; cin >> N;
    short min = 1001;
    while(N--) {
        short A, B; cin >> A >> B;

        if(A <= B && min > B) min = B; 
    }
    if(min == 1001) {
        cout << -1;
        return 0;
    }
    cout << min;
}