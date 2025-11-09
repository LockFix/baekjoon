#include <iostream>
#include <list>

using namespace std;

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
        bool flag = true;
        for(int i = 0; i < N; i++) cin >> arr[i];
        for(int i = 0; i < N; i++) {
            short index = 0;
            for(int j : l) {
                if(j != arr[index]) {
                    break;
                }
                index++;
            }
            if(index == N) {
                ans.push_back(list<short>(arr, arr + N));
                flag = false;
                break;
            }
            l.push_back(l.front());
            l.pop_front();
        }
        if(!flag) continue;
        for(int i = 0; i < N; i++) {
            short index = 0;
            for(int j : l2) {
                if(j != arr[index]) {
                    break;
                }
                index++;
            }
            if(index == N) {
                ans.push_back(list<short>(arr, arr + N));
                flag = false;
                break;
            }
            l2.push_back(l2.front());
            l2.pop_front();
        }
        if(!flag) continue;
        for(int i = 0; i < N; i++) {
            short index = N - 1;
            for(int j : l) {
                if(j != arr[index]) {
                    break;
                }
                index--;
            }
            if(index == -1) {
                ans.push_back(list<short>(arr, arr + N));
                flag = false;
                break;
            }
            l.push_back(l.front());
            l.pop_front();
        }
        if(!flag) continue;
        for(int i = 0; i < N; i++) {
            short index = N - 1;
            for(int j : l2) {
                if(j != arr[index]) {
                    break;
                }
                index--;
            }
            if(index == -1) {
                ans.push_back(list<short>(arr, arr + N));
                break;
            }
            l2.push_back(l2.front());
            l2.pop_front();
        }
    }
    cout << ans.size() << '\n';
    for(list<short> i : ans) {
        for(int j : i) {
            cout << j << ' ';
        }
        cout << '\n';
    }
}