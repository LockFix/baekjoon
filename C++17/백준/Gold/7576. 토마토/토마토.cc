#include <iostream>
#include <utility>
#include <queue>
using namespace std;

/* 너비우선탐색(BFS)

좌우상하 너비우선으로 전염

큐 메모리 초과... -> 방문 체크를 큐에 삽입하는 코드로 이동함 -> 이전) 큐 삽입 후 실행

*/

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int M, N; cin >> M >> N;
    int tomato[1001][1001];
    bool visited[1001][1001] = {false};
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            cin >> tomato[i][j];
        }
    }
    queue<pair<int, int>> q;
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            if(tomato[i][j] == 1) {
                visited[i][j] = true;
                q.push({i, j});
            }
        }
    }
    int k = q.size(); //같은 크기의 너비 개수
    int count = 0; //날짜 카운트
    while(!q.empty()) {
        if(k == 0) {
            k = q.size();
            count++;
        }
        int i = q.front().first;
        int j = q.front().second;
        q.pop();
        k--;
        tomato[i][j] = 1;
        
        if(j < M && j >= 0) {
            if(i + 1 < N && !visited[i + 1][j] && tomato[i + 1][j] != -1) {
                visited[i + 1][j] = true;
                q.push({i + 1, j}); //아래
            }
            if(i - 1 >= 0 && !visited[i - 1][j] && tomato[i - 1][j] != -1) {
                visited[i - 1][j] = true;
                q.push({i - 1, j}); //위
            }
        }
        if(i < N && i >= 0) {
            if(j + 1 < M && !visited[i][j + 1] && tomato[i][j + 1] != -1) {
                visited[i][j + 1] = true;
                q.push({i, j + 1}); //오른쪽
            }
            if(j - 1 >= 0 && !visited[i][j - 1] && tomato[i][j - 1] != -1) {
                visited[i][j - 1] = true;
                q.push({i, j - 1}); //왼쪽
            }
        }
    }
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            if(tomato[i][j] == 0) {
                cout << -1;
                return 0;
            }
        }
    }
    cout << count;
}