#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cal(pair<string, double> a, pair<string, double> b) {
    return a.second > b.second;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N; cin >> N;
    while(N != 0) {
        vector<pair<string, double>> v(N);
        double max = 0;
        for(int i = 0; i < N; i++) {
            string name; cin >> name;
            double height; cin >> height;
            v.push_back({name, height});
            if(max < height) max = height;
        }
        stable_sort(v.begin(), v.end(), cal);
        for(int i = 0; i < N; i++) {
            if(max == v[i].second) cout << v[i].first << ' ';
        }
        cout << '\n';
        cin >> N;
    }
}   