#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    short N; cin >> N;

    unordered_map<string, short> m;
    for(short i = 0; i < N; i++) {
        string tmp; cin >> tmp;
        m[tmp] = 0;
    }
    for(short i = 0; i < N; i++) {
        string tmp; cin >> tmp;
        m[tmp]++;
    }
    for(pair<string, short > i : m) {
        if(i.second == 0) {
            cout << i.first;
            return 0;
        }
    }
}