#include <algorithm>
#include <iostream>
#include <queue>
#include <string>
#include <vector>
using namespace std;

/*

BFS;;

*/

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N;
    cin >> N;
    cin.ignore();
    vector<vector<char>> picture(N, vector<char>(N));         // rgb picture
    vector<vector<bool>> visited(N, vector<bool>(N, false));  // 탐색 했는가?

    for (int i = 0; i < N; i++) {  // rgb 불러오기
        string temp;
        getline(cin, temp);
        for (int j = 0; j < N; j++) {
            picture[i][j] = temp[j];
        }
    }
    int sec = 0;     // 일반인이 보는 구역의 수
    int juksec = 0;  // 적록색약인이 보는 구역의 수

    for (int i = 0; i < N; i++) {  // 일반인이 보는 구역의 수 구하기
        for (int j = 0; j < N; j++) {
            if (visited[i][j]) continue;  // 이미 탐색했다면 건너뛰기
            char color = picture[i][j];
            queue<pair<int, int>> q;
            q.push({i, j});
            sec++;
            while (!q.empty()) {
                int tI = q.front().first;   // i
                int tJ = q.front().second;  // j
                q.pop();
                if (tI + 1 < N && !visited[tI + 1][tJ] && picture[tI + 1][tJ] == color) {  // 아래 탐색
                    visited[tI + 1][tJ] = true;
                    q.push({tI + 1, tJ});
                }
                if (tI - 1 >= 0 && !visited[tI - 1][tJ] && picture[tI - 1][tJ] == color) {  // 위 탐색
                    visited[tI - 1][tJ] = true;
                    q.push({tI - 1, tJ});
                }
                if (tJ + 1 < N && !visited[tI][tJ + 1] && picture[tI][tJ + 1] == color) {  // 오른쪽 탐색
                    visited[tI][tJ + 1] = true;
                    q.push({tI, tJ + 1});
                }
                if (tJ - 1 >= 0 && !visited[tI][tJ - 1] && picture[tI][tJ - 1] == color) {  // 오른쪽 탐색
                    visited[tI][tJ - 1] = true;
                    q.push({tI, tJ - 1});
                }
            }
        }
    }
    visited.clear();  // 벡터 재활용
    visited.assign(N, vector<bool>(N, false));

    for (int i = 0; i < N; i++) {  // 적록색약인이 보는 구역의 수 구하기
        for (int j = 0; j < N; j++) {
            if (visited[i][j]) continue;  // 이미 탐색했다면 건너뛰기
            char color = picture[i][j];
            queue<pair<int, int>> q;
            q.push({i, j});
            juksec++;
            if (color == 'R' || color == 'G') {  // 적록색약
                while (!q.empty()) {
                    int tI = q.front().first;   // i
                    int tJ = q.front().second;  // j
                    q.pop();
                    if (tI + 1 < N && !visited[tI + 1][tJ] && picture[tI + 1][tJ] != 'B') {  // 아래 탐색
                        visited[tI + 1][tJ] = true;
                        q.push({tI + 1, tJ});
                    }
                    if (tI - 1 >= 0 && !visited[tI - 1][tJ] && picture[tI - 1][tJ] != 'B') {  // 위 탐색
                        visited[tI - 1][tJ] = true;
                        q.push({tI - 1, tJ});
                    }
                    if (tJ + 1 < N && !visited[tI][tJ + 1] && picture[tI][tJ + 1] != 'B') {  // 오른쪽 탐색
                        visited[tI][tJ + 1] = true;
                        q.push({tI, tJ + 1});
                    }
                    if (tJ - 1 >= 0 && !visited[tI][tJ - 1] && picture[tI][tJ - 1] != 'B') {  // 오른쪽 탐색
                        visited[tI][tJ - 1] = true;
                        q.push({tI, tJ - 1});
                    }
                }
            } else {  // 파랑파랑
                while (!q.empty()) {
                    int tI = q.front().first;   // i
                    int tJ = q.front().second;  // j
                    q.pop();
                    if (tI + 1 < N && !visited[tI + 1][tJ] && picture[tI + 1][tJ] == color) {  // 아래 탐색
                        visited[tI + 1][tJ] = true;
                        q.push({tI + 1, tJ});
                    }
                    if (tI - 1 >= 0 && !visited[tI - 1][tJ] && picture[tI - 1][tJ] == color) {  // 위 탐색
                        visited[tI - 1][tJ] = true;
                        q.push({tI - 1, tJ});
                    }
                    if (tJ + 1 < N && !visited[tI][tJ + 1] && picture[tI][tJ + 1] == color) {  // 오른쪽 탐색
                        visited[tI][tJ + 1] = true;
                        q.push({tI, tJ + 1});
                    }
                    if (tJ - 1 >= 0 && !visited[tI][tJ - 1] && picture[tI][tJ - 1] == color) {  // 오른쪽 탐색
                        visited[tI][tJ - 1] = true;
                        q.push({tI, tJ - 1});
                    }
                }
            }
        }
    }
    cout << sec << " " << juksec;
}