#include <iostream>
#include <queue>
#include <set>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    short N, M; cin >> N >> M;
    short towns[N][M];
    queue<pair<short, short>> q;
    for(short i = 0; i < N; i++) {
        for(short j = 0; j < M; j++) {
            short temp; cin >> temp;
            if(temp == 1 || temp == 2) q.push({i, j});
            towns[i][j] = temp;
        }
    }
    int one = 0, two = 0, three = 0;
    while(!q.empty()) {
        int size = q.size();
        set<pair<short, short>> s;
        while(size--) {
            short x = q.front().first;
            short y = q.front().second;

            if(towns[x][y] == 1) {
                if(y >= 1 && towns[x][y - 1] != -1 && towns[x][y - 1] != 1 && towns[x][y - 1] != 4 && towns[x][y - 1] != 3 && towns[x][y - 1] != 2) {
                    if(towns[x][y - 1] == 5) {
                        towns[x][y - 1] = 3;
                        s.erase({x, y - 1});
                    }
                    else {
                        q.push({x, y - 1});
                        towns[x][y - 1] = 4;
                        s.insert({x, y - 1});
                    }
                }
                if(y < M - 1 && towns[x][y + 1] != -1 && towns[x][y + 1] != 1 && towns[x][y + 1] != 4 && towns[x][y + 1] != 3 && towns[x][y + 1] != 2) {
                    if(towns[x][y + 1] == 5) {
                        towns[x][y + 1] = 3;
                        s.erase({x, y + 1});
                    }
                    else {
                        q.push({x, y + 1});
                        towns[x][y + 1] = 4;
                        s.insert({x, y + 1});
                    }
                }
                if(x >= 1 && towns[x - 1][y] != -1 && towns[x - 1][y] != 1 && towns[x - 1][y] != 4 && towns[x - 1][y] != 3 && towns[x - 1][y] != 2) {
                    if(towns[x - 1][y] == 5) {
                        towns[x - 1][y] = 3;
                        s.erase({x - 1, y});
                    }
                    else {
                        q.push({x - 1, y});
                        towns[x - 1][y] = 4;
                        s.insert({x - 1, y});
                    }
                }
                if(x < N - 1 && towns[x + 1][y] != -1 && towns[x + 1][y] != 1 && towns[x + 1][y] != 4 && towns[x + 1][y] != 3 && towns[x + 1][y] != 2) {
                    if(towns[x + 1][y] == 5) {
                        towns[x + 1][y] = 3;
                        s.erase({x + 1, y});
                    }
                    else {
                        q.push({x + 1, y});
                        towns[x + 1][y] = 4;
                        s.insert({x + 1, y});
                    }
                }
            } else if(towns[x][y] == 2) {
                if(y >= 1 && towns[x][y - 1] != -1 && towns[x][y - 1] != 2 && towns[x][y - 1] != 5 && towns[x][y - 1] != 3 && towns[x][y - 1] != 1) {
                    if(towns[x][y - 1] == 4) {
                        towns[x][y - 1] = 3;
                        s.erase({x, y - 1});
                    }
                    else {
                        q.push({x, y - 1});
                        towns[x][y - 1] = 5;
                        s.insert({x, y - 1});
                    }
                }
                if(y < M - 1 && towns[x][y + 1] != -1 && towns[x][y + 1] != 2 && towns[x][y + 1] != 5 && towns[x][y + 1] != 3 && towns[x][y + 1] != 1) {
                    if(towns[x][y + 1] == 4) {
                        towns[x][y + 1] = 3;
                        s.erase({x, y + 1});
                    }
                    else {
                        q.push({x, y + 1});
                        towns[x][y + 1] = 5;
                        s.insert({x, y + 1});
                    }
                }
                if(x >= 1 && towns[x - 1][y] != -1 && towns[x - 1][y] != 2 && towns[x - 1][y] != 5 && towns[x - 1][y] != 3 && towns[x - 1][y] != 1) {
                    if(towns[x - 1][y] == 4) {
                        towns[x - 1][y] = 3;
                        s.erase({x - 1, y});
                    }
                    else {
                        q.push({x - 1, y});
                        towns[x - 1][y] = 5;
                        s.insert({x - 1, y});
                    }
                }
                if(x < N - 1 && towns[x + 1][y] != -1 && towns[x + 1][y] != 2 && towns[x + 1][y] != 5 && towns[x + 1][y] != 3 && towns[x + 1][y] != 1) {
                    if(towns[x + 1][y] == 4) {
                        towns[x + 1][y] = 3;
                        s.erase({x + 1, y});
                    }
                    else {
                        q.push({x + 1, y});
                        towns[x + 1][y] = 5;
                        s.insert({x + 1, y});
                    }
                }
            }
            q.pop();
        }
        for(pair<short, short> tmp : s) {
            if(towns[tmp.first][tmp.second] == 4) towns[tmp.first][tmp.second] = 1;
            else towns[tmp.first][tmp.second] = 2;
        }
    }
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            if(towns[i][j] == 1) one++;
            else if(towns[i][j] == 2) two++;
            else if(towns[i][j] == 3) three++;
        }
    }
    cout << one << ' ' << two << ' ' << three;
}