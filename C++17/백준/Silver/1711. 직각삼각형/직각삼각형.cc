#include <iostream>
#include <cmath>

using namespace std;

long long distance(pair<long long, long long> a, pair<long long, long long> b) {
    return (a.first - b.first) * (a.first - b.first) + (a.second - b.second) * (a.second - b.second);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int count = 0;
    short N; cin >> N;
    pair<long long, long long> coord[N];
    for(int i = 0; i < N; i++) {
        int x, y; cin >> x >> y;
        coord[i] = {x, y};
    }
    for(int i = 0; i < N - 2; i++) {
        pair<long long, long long> a = coord[i];
        for(int j = i + 1; j < N - 1; j++) {
            pair<long long, long long> b = coord[j];
            for(int k = j + 1; k < N; k++) {
                long long ab = distance(a, b);
                long long ac = distance(a, coord[k]);
                long long bc = distance(b, coord[k]);

                if(ab + ac == bc || ab + bc == ac || ac + bc == ab) count++;
            }
        }
    }
    cout << count;
}