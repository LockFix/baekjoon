#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool compare(int a, int b) {
    return a < b;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N; cin >> N;
    while(N--) {
        string s; cin >> s;
        vector<int> v(27);
        for(int i = 0; i < s.length(); i++) v[s[i] - 97]++;
        sort(v.begin(), v.end(), compare);
        int length = v.size();
        int count = 0;
        for(int i : v) {
            if(length == 2) break;
            count += i;
            length--;
        }
        cout << count << '\n';
    }
}   