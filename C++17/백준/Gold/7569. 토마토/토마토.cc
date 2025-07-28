#include <iostream>
#include <queue>
#include <tuple>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int M, N, H; cin >> M >> N >> H;
    int tomato[101][101][101];
    bool visited[101][101][101] = {};
    for(int k = 0; k < H; k++) {
        for(int i = 0; i < N; i++) {
            for(int j = 0; j < M; j++) {
                cin >> tomato[k][i][j];
            }
        }
    }
    queue<tuple<int, int, int>> q;
    for(int k = 0; k < H; k++) {
        for(int i = 0; i < N; i++) {
            for(int j = 0; j < M; j++) {
                if(tomato[k][i][j] == 1) {
                    visited[k][i][j] = true;
                    q.push({k, i, j});
                }
            }
        }
    }
    int t = q.size(); //같은 크기의 너비 개수
    int count = 0; //날짜 카운트
    while(!q.empty()) {
        if(t == 0) {
            t = q.size();
            count++;
        }
        int k = get<0>(q.front());
        int i = get<1>(q.front());
        int j = get<2>(q.front());
        q.pop();
        t--;
        tomato[k][i][j] = 1;
        
        if(j < M && j >= 0) {
            if(i + 1 < N && !visited[k][i + 1][j] && tomato[k][i + 1][j] != -1) {
                visited[k][i + 1][j] = true;
                q.push({k, i + 1, j}); //아래
            }
            if(i - 1 >= 0 && !visited[k][i - 1][j] && tomato[k][i - 1][j] != -1) {
                visited[k][i - 1][j] = true;
                q.push({k, i - 1, j}); //위
            }
            if(i < N && i >= 0) {
                if(k + 1 < H && tomato[k + 1][i][j] != -1 && !visited[k + 1][i][j]) {
                    visited[k + 1][i][j] = true;
                    q.push({k + 1, i, j});
                }
                if(k - 1 >= 0 && tomato[k - 1][i][j] != -1 && !visited[k - 1][i][j]) {
                    visited[k - 1][i][j] = true;
                    q.push({k - 1, i, j});
                }
            }        }
        if(i < N && i >= 0) {
            if(j + 1 < M && !visited[k][i][j + 1] && tomato[k][i][j + 1] != -1) {
                visited[k][i][j + 1] = true;
                q.push({k, i, j + 1}); //오른쪽
            }
            if(j - 1 >= 0 && !visited[k][i][j - 1] && tomato[k][i][j - 1] != -1) {
                visited[k][i][j - 1] = true;
                q.push({k, i, j - 1}); //왼쪽
            }
        }
    }
    for(int k = 0; k < H; k++) {
        for(int i = 0; i < N; i++) {
            for(int j = 0; j < M; j++) {
                if(tomato[k][i][j] == 0) {
                    cout << -1;
                    return 0;
                }
            }
        }
    }
    
    cout << count;
}