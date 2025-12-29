#include <iostream>
#include <vector>
#include <unordered_set>
#include <cmath>

using namespace std;

vector<int> v(100001);
unordered_set<int> s;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    bool prime[100000];
    for(int i = 2; i < 100000; i++) {
        if(prime[i]) continue;
        s.insert(i);
        for(int j = 2; j * i < 100000; j++) {
            prime[i * j] = true;
        }
    }
    v[1] = 1;
    for(int i = 2; i <= 100000; i++) {
            bool flag = true;
            if(s.find(i + 1) == s.end()) flag = false;
            else {
                for(int j = 1; j < to_string(i).length(); j++) {
                    if(s.find((i / (int)round(pow(10, j))) * (i % (int)(round(pow(10, j)))) + 1) == s.end()) flag = false;
                
                }
            }
            if(flag) v[i] = v[i - 1] + 1;
            else v[i] = v[i - 1];
        }

    int T; cin >> T;
    while(T--) {
        int N; cin >> N;
        
        cout << v[N] << '\n';
    }
}