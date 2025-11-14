#include <iostream>
#include <queue>
#include <unordered_set>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int A, B; cin >> A >> B;
    queue<int> q;
    int cnt = 0;
    unordered_set<long long> visited;
    q.push(A);
    long long temp = A;
    while(!q.empty() && temp != B) {
        int size = q.size();
        while(size-- && temp != B) {
            temp = q.front();
            if(temp * 2 <= B && visited.find(temp * 2) == visited.end()) {
                visited.insert(temp * 2);
                q.push(temp * 2);
            }
            if(temp * 10 + 1 <= B && visited.find(temp * 10 + 1) == visited.end()) {
                visited.insert(temp * 10 + 1);
                q.push(temp * 10 + 1);
            }
            q.pop();
        }
        cnt++;
    }
    if(temp == B) cout << cnt;
    else cout << -1;
}