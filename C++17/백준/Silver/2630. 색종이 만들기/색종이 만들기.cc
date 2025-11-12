#include <iostream>
#include <vector>

using namespace std;

short check(short arr[][128], short size, pair<short, short> start, short point) {
    for(short i = start.first; i < start.first + size; i++) {
        for(short j = start.second; j < start.second + size; j++) {
            if(arr[i][j] != point) {
                return -1;
            }
        }
    }
    return point;
}

pair<short, short> division(short arr[][128], pair<short, short> start, short size) {
    short flag = check(arr, size, start, 0);
    flag = (check(arr, size, start, 1) == 1 ? 1 : flag);

    if(flag == -1) {
        vector<pair<short, short>> temp(4);
        temp[0] = division(arr, start, size / 2);
        temp[1] = division(arr, {start.first, start.second + size / 2}, size / 2);
        temp[2] = division(arr, {start.first + size / 2, start.second}, size / 2);
        temp[3] = division(arr, {start.first + size / 2, start.second + size / 2}, size / 2);

        return {temp[0].first + temp[1].first + temp[2].first + temp[3].first, temp[0].second + temp[1].second + temp[2].second + temp[3].second};
    }
    if(flag == 0) return {1, 0};
    return {0, 1};
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    short N; cin >> N;
    short arr[N][128];
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) cin >> arr[i][j];
    }
    pair<short, short> ans = division(arr, {0, 0}, N);
    cout << ans.first << '\n' << ans.second;
}