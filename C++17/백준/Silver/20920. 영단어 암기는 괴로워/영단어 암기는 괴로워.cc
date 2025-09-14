    #include <algorithm>
    #include <iostream>
    #include <map>
    #include <vector>

    using namespace std;
    bool compare(pair<string, int> a, pair<string, int> b) {
        if(a.second == b.second) {
            if(a.first.size() == b.first.size()) return a.first < b.first;
            return a.first.size() > b.first.size();
        }
        return a.second > b.second;
    }

    int main() {
        ios::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);

        int N, M; cin >> N >> M;
        map<string, int> m;
        for(int i = 0; i < N; i++) {
            string temp; cin >> temp;
            if(temp.size() < M) continue;
            m[temp]++;
        }
        vector<pair<string, int>> v(m.begin(), m.end());
        sort(v.begin(), v.end(), compare);
        for(pair<string, int> tmp : v) {
            cout << tmp.first << '\n';
        }
    }