#include <iostream>
#include <unordered_set>
#include <queue>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    long long N; cin >> N;
    
    if(N == 1) {
        cout << 0;
        return 0;
    }

    unordered_set<long long> arr;
    
    queue<long long> q;
    q.push(N);
    int cnt = 0;
    long long tmp = N;
    while(arr.find(1) == arr.end()) {
        queue<long long> q2;
        while(!q.empty()) {
            tmp = q.front();
            if(arr.find(tmp - 1) == arr.end()) {
                arr.insert(tmp - 1);
                q2.push(tmp - 1);
            }
            if(tmp % 2 == 0 && arr.find(tmp / 2) == arr.end()) {
                arr.insert(tmp / 2);
                q2.push(tmp / 2);
            }
            if(tmp % 3 == 0 && arr.find(tmp / 3) == arr.end()) {
                arr.insert(tmp / 3);
                q2.push(tmp / 3);
            }
            q.pop();
        }
        q = q2;
        cnt++;
    }
    cout << cnt;
}