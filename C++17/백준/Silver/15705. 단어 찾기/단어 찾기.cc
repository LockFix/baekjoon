#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string s; cin >> s;
    int N, M; cin >> N >> M;
    vector<vector<char>> v(N, vector<char>(M));

    int dxs[] = {-1, -1, 1, 1, 1, -1, 0, 0};
    int dys[] = {-1, 0, 0, 1, -1, 1, 1, -1};

    for(int i = 0; i < N; i++) {
        string temp; cin >> temp;
        for(int j = 0; j < M; j++) v[i][j] = temp[j];
    }

    int dx;
    int dy;
    for(int k = 0; k < 8; k++) {
        dx = dxs[k];
        dy = dys[k];
        for(int i = 0; i < N; i++) {
            for(int j = 0; j < M; j++) {
                int length = 0;
                int x = j;
                int y = i;
                for(int l = 0; l < s.length(); l++, length++, x += dx, y += dy) {
                    if(y < 0 || y >= N || x < 0 || x >= M) break; 
                    if(v[y][x] != s[length]) break;
                }
                if(length == s.length()) {  
                    cout << 1;
                    return 0;
                }
            }
        }
    }
    cout << 0;
}   