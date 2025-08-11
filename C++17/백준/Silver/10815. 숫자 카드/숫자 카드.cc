#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N; cin >> N;
    unordered_set<int> has;
    while(N--) {
        int temp; cin >> temp;
        has.insert(temp);
    }
    int M; cin >> M;
    while(M--) {
        int temp; cin >> temp;
        if(has.find(temp) == has.end()) cout << "0 ";
        else cout << "1 ";
    }
}   