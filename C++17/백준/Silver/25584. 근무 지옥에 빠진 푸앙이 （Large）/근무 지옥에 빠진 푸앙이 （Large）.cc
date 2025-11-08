#include <iostream>
#include <map>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    short N; cin >> N;
    int sum = 0;
    map<string, int> map;
    while(N--) {
        for(int i = 0; i < 7; i++) {
            string temp; cin >> temp;
            if(temp == "-") continue;
            map[temp] += 4;
            sum += 4;
        }
        for(int i = 0; i < 7; i++) {
            string temp; cin >> temp;
            if(temp == "-") continue;
            map[temp] += 6;
            sum += 6;
        }
        for(int i = 0; i < 7; i++) {
            string temp; cin >> temp;
            if(temp == "-") continue;
            map[temp] += 4;
            sum += 4;
        }
        for(int i = 0; i < 7; i++) {
            string temp; cin >> temp;
            if(temp == "-") continue;
            map[temp] += 10;
            sum += 10;
        }
    }
    if(map.empty()) {
        cout << "Yes";
        return 0;
    }
    vector<pair<string, int>> v(map.begin(), map.end());
    sort(v.begin(), v.end(), [](pair<string, int> i, pair<string, int> j) -> bool {
        return i.second < j.second;
    });
    if(v[v.size() - 1].second - v[0].second > 12) {
        cout << "No";
    } else cout << "Yes";
}