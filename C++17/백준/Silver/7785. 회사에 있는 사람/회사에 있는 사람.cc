#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N; cin >> N;
    map<string, bool> log;
    while(N--) {
        string name, state; cin >> name >> state;
        if(state == "enter") log[name] = true;
        else log[name] = false;
    }
    vector<pair<string, bool>> v(log.begin(), log.end());
    for(int i = v.size() - 1; i >= 0; i--) {
        pair<string, bool> temp = v[i];
        if(temp.second) cout << temp.first << '\n';
    }
}   