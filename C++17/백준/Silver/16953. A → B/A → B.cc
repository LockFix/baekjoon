#include <iostream>
#include <queue>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int A, B; cin >> A >> B;
    queue<pair<int, int>> q;
    q.push({A, 1});
    pair<long long, int> temp = {A, 0};
    while(!q.empty() && temp.first != B) {
        temp = q.front();
        long long a = temp.first * 2;
        long long b = temp.first * 10 + 1;
        if(a <= B) q.push({a, temp.second + 1});
        if(b <= B) q.push({b, temp.second + 1});
        q.pop();
    }
    if(temp.first == B) cout << temp.second;
    else cout << -1;
}