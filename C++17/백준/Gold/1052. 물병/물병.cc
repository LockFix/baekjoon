#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    short k; cin >> n >> k;
    
    int answer = 0;
    while(__builtin_popcount(n) > k) {
        n++;
        answer++;
    }
    cout << answer;
}