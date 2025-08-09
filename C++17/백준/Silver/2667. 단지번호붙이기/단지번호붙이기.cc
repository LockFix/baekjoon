#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N; cin >> N;
    int arr[N][N];
    int visited[N][N] = {};
    vector<int> houseC; //각각의 단지에 속하는 집들
    int count = 0; //단지 수
    for(int i = 0; i < N; i++) {
        string temp; cin >> temp;
        for(int j = 0; j < N; j++) arr[i][j] = temp[j] - '0';
    }
    for(int i = 0; i < N; i++) { //i = y, j = x
        for(int j = 0; j < N; j++) {
            if(arr[i][j] == 1 && !visited[i][j]) {
                queue<pair<int, int>> q;
                visited[i][j] = true;
                q.push({j, i}); //x , y
                int houses = 0; //단지 내 집들 수
                count++; //단지 추가

                while(!q.empty()) {
                    int x = q.front().first;
                    int y = q.front().second;
                    q.pop();
                    houses++;

                    if(x + 1 < N && !visited[y][x + 1] && arr[y][x + 1] == 1) { //오른쪽에 근접한 집이 있나?
                        visited[y][x + 1] = true;
                        q.push({x + 1, y});
                    }
                    if(x - 1 >= 0 && !visited[y][x - 1] && arr[y][x - 1] == 1) { //왼쪽에 근접한 집이 있나?
                        visited[y][x - 1] = true;
                        q.push({x - 1, y});
                    }
                    if(y + 1 < N && !visited[y + 1][x] && arr[y + 1] [x] == 1) { //아래쪽에 근접한 집이 있나?
                        visited[y + 1][x] = true;
                        q.push({x, y + 1});
                    }
                    if(y - 1 >= 0 && !visited[y - 1][x] && arr[y - 1][x] == 1) { //위쪽에 근접한 집이 있나?
                        visited[y - 1][x] = true;
                        q.push({x, y - 1});
                    }
                }
                houseC.push_back(houses);
            }
        }
    }
    sort(houseC.begin(), houseC.end());
    cout << count << '\n';

    for(int i : houseC) {
        cout << i << '\n';
    }
}   