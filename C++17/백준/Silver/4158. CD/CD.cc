#include <iostream>
#include <unordered_set>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N, M; cin >> N >> M;
    while(!(N == 0 && M == 0)) {
        unordered_set<int> s;
        int count = 0;
        while(N--) {
            int temp; cin >> temp;
            s.insert(temp);
        }
        while(M--) {
            int temp; cin >> temp;
            if(s.find(temp) != s.end()) count++;
        }
        cout << count << '\n';
        cin >> N >> M;
    }
}