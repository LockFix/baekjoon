#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N; cin >> N;
    int start[N], end[N];

    for(int i = 0; i < N; i++) {
        cin >> start[i] >> end[i];
    }
    sort(start, start + N);
    sort(end, end + N);
    if(start[N - 1] > end[0]) cout << "edward is right";
    else cout << "gunilla has a point";
}

