#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    unordered_map<int, int> m;
    for(int i = 0; i < 5; i++) {
        int temp; cin >> temp;
        m[temp]++;
        if(m[temp] == 2) m[temp] = 0;
    }
    for(auto i : m) {
        if(i.second != 0) cout << i.first;
    }
}  