#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N, M; cin >> N >> M;

    vector<int> bait(N);
    vector<int> fish(M);
    vector<int> add;
    vector<bool> is(M);
    for(int i = 0; i < N; i++) cin >> bait[i];
    for(int i = 0; i < M; i++) cin >> fish[i];

    sort(bait.begin(), bait.end());
    sort(fish.begin(), fish.end());

    long long count = 0;
    int added = 0;
    for(int i = 0, j = 0; i < N && j < M; j++) {
        if(bait[i] < fish[j]) {
            add.push_back(fish[j]);
            count += fish[j];
            added++;
            is[j] = true;
            i++;
        }
    }
    for(int i = 0, j = M - 1; i < added && j >= 0; j--) {
        if(add[i] < fish[j] && !is[j]) {
            count += fish[j];
            count -= add[i];
            i++;
        }
    }
    cout << count;
}