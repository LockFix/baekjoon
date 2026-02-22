#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N; cin >> N;

    unordered_map<long long, int> x;
    unordered_map<long long, int> y;

    while(N--) {
        long long xt, yt; cin >> xt >> yt;

        x[xt]++;
        y[yt]++;
    }
    int count = 0;
    for(pair<long long, int> p : x) {
        if(p.second >= 2) count++;
    }
    for(pair<long long, int> p : y) {
        if(p.second >= 2) count++;
    }
    cout << count;
}