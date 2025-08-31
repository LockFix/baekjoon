#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N, M; cin >> N >> M;
    unordered_set<string> s;
    int count = 0;
    while(N--) {
        string temp; cin >> temp;
        s.insert(temp);
    }
    while(M--) {
        string temp; cin >> temp;
        if(s.find(temp) != s.end()) count++;
    }
    cout << count;
}   