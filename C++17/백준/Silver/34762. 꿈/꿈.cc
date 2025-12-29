#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int N, K, M; cin >> N >> K >> M;
    if(M == 1) {
        int temp; cin >> temp;
        if(K + 1 + temp > N && temp != N) cout << "NO";
        else cout << "YES";
        return 0;
    }
    int previous; cin >> previous;
    for(int i = 0; i < M - 2; i++) {
        int current; cin >> current;
        if(current - previous != 1 && previous + 1 + K >= current) {
            cout << "NO";
            return 0;
        } else previous = current;
    }
    int temp; cin >> temp;
    if((K + 1 + temp > N && temp != N) || (temp - previous != 1 && previous + 1 + K >= temp)) {
        cout << "NO";
        return 0;
    }
    cout << "YES";
}