#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long N; cin >> N;
    if(N == 0) {
        cout << "NO";
        return 0;
    }

    vector<long long> v;
    for(unsigned long long i = 1; i <= __LONG_LONG_MAX__ && i <= N; i *= 3) v.push_back(i);
    while(N != 0) {
        if(v.empty()) {
            cout << "NO";
            return 0;
        }
        long long tmp = v.back();
        v.pop_back();
        
        if(tmp > N) continue;
        N -= tmp;
    }
    cout << "YES";
}