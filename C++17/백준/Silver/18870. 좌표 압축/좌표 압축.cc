#include <iostream>
#include <algorithm>
#include <set>
#include <unordered_map>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N; cin >> N;
    int arr[N];
    set<int> copy;
    for(int i = 0; i < N; i++) {
        cin >> arr[i];
        copy.insert(arr[i]);
    }
    int index = 0;
    unordered_map<int, int> count;
    for(int i : copy) {
        count[i] = index;
        index++;
    }
    for(int i = 0; i < N; i++) cout << count[arr[i]] << " ";
}