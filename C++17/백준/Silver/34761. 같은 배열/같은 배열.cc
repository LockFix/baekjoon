#include <iostream>
#include <unordered_set>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int N; cin >> N;
    int A[N];
    int B[2 * N];
    unordered_set<int> s;
    for(int i = 0; i < N; i++) {
        int temp; cin >> temp;
        s.insert(temp);
        A[i] = temp;
    }
    for(int i = 0; i < 2 * N; i++) cin >> B[i];
    for(int i = 0; i < N; i++) {
        if(A[i] != B[i]) {
            cout << "NO";
            return 0;
        }
    }
    for(int i = N; i < 2 * N; i++) {
        if(s.find(B[i]) == s.end()) {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
}