#include <iostream>
#include <vector>
#include <queue>
using namespace std;

//BFS

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int T; cin >>T;
    while(T--) {
        int M, N, K; cin >> M >> N >> K;
        vector<vector<int>> cabbages(N, vector<int>(M));
        queue<pair<int, int>> q;
        vector<vector<bool>> visited(N, vector<bool>(M));
        while(K--) {
            int x, y; cin >> x >> y;
            cabbages[y][x] = 1;
        }
        int worms = 0;
        for(int i = 0; i < N; i++) {
            for(int j = 0; j < M; j++) {
                if(cabbages[i][j] == 1 && !visited[i][j]) {
                    worms++;
                    q.push({i, j});
                    while(!q.empty()){
                        int x = q.front().second;
                        int y = q.front().first;
                        q.pop();
                        visited[y][x] = true;

                        if(x - 1 >= 0 && !visited[y][x - 1] && cabbages[y][x - 1] != 0) { //좌
                            visited[y][x - 1] = true;
                            q.push({y, x - 1});
                        }
                        if(x + 1 < M && !visited[y][x + 1] && cabbages[y][x + 1] != 0) { //우
                            visited[y][x + 1] = true;
                            q.push({y, x + 1});
                        }
                        if(y + 1 < N && !visited[y + 1][x] && cabbages[y + 1][x] != 0) { // 하
                            visited[y + 1][x] = true;
                            q.push({y + 1, x}); 
                        }
                        if(y - 1 >= 0 && !visited[y - 1][x] & cabbages[y - 1][x] != 0) { //상
                            visited[y - 1][x] = true;
                            q.push({y - 1, x});
                        }
                    }
                }
            }
        }
        cout << worms << '\n';
    }
}
