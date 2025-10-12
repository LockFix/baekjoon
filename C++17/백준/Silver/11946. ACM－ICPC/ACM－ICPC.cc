#include <iostream>
#include <vector>
#include <algorithm>
#include <tuple>

using namespace std;

bool compare(tuple<short, short, int> a, tuple<short, short, int> b) {
    if(get<1>(a) == get<1>(b)) {
        if(get<2>(a) == get<2>(b)) return get<0>(a) < get<0>(b);
        return get<2>(a) < get<2>(b);
    }
    return get<1>(a) > get<1>(b);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    short n, m, q; cin >> n >> m >> q;
    vector<vector<short>> trial(n, vector<short>(m));
    vector<tuple<short, short, int>> ans(n);
    for(int i = 1; i <= n; i++) ans[i - 1] = {i, 0, 0};
    while(q--) {
        short time, team, problem;
        string result; cin >> time >> team >> problem >> result;
        team--; problem--;

        if(trial[team][problem] != -1) {
            if(result != "AC") trial[team][problem]++;
            else {
                ans[team] = {team + 1, get<1>(ans[team]) + 1, get<2>(ans[team]) + trial[team][problem] * 20 + time};
                trial[team][problem] = -1;
            }
        }
    }
    sort(ans.begin(), ans.end(), compare);
    for(tuple<short, short, int> i : ans) {
        cout << get<0>(i) << ' ' << get<1>(i) << ' ' << get<2>(i) << '\n';
    }
}