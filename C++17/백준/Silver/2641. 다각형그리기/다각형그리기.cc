#include <iostream>
#include <list>

using namespace std;

bool check(list<short> l, short arr[], short N, list<list<short>> *ans) {
    for(int i = 0; i < N; i++) {
        short index = 0;
        for(int j : l) {
            if(j != arr[index]) {
                break;
            }
            index++;
        }
        if(index == N) {
            ans->push_back(list<short>(arr, arr + N));
            return true;
        }
        l.push_back(l.front());
        l.pop_front();
    }
    return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    short N; cin >> N;
    list<short> l;
    list<short> l2;
    list<list<short>> ans;
    for(int i = 0; i < N; i++) {
        short temp; cin >> temp;
        l.push_back(temp);
        if(temp == 1 || temp == 3) l2.push_back(4 - temp);
        else l2.push_back(6 - temp);
    }
    short M; cin >> M;
    while(M--) {
        short arr[N];
        for(int i = 0; i < N; i++) cin >> arr[i];
        bool flag = check(l, arr, N, &ans);
        if(flag) continue;
        flag = check(l2, arr, N, &ans);
        if(flag) continue;
        l.reverse();
        flag = check(l, arr, N, &ans);
        if(flag) continue;
        l2.reverse();
        check(l2, arr, N, &ans);
    }
    cout << ans.size() << '\n';
    for(list<short> i : ans) {
        for(int j : i) {
            cout << j << ' ';
        }
        cout << '\n';
    }
}