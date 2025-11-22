#include <iostream>
#include <queue>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    string board[7];

    for(int i = 0; i < 7; i++) cin >> board[i];
    board[0] = "  " + board[0] + "  ";
    board[1] = "  " + board[1] + "  ";
    board[5] = "  " + board[5] + "  ";
    board[6] = "  " + board[6] + "  ";
    short cnt = 0;
    queue<pair<short, short>> q;
    for(int i = 0; i < 7; i++) {
        for(int j = 0; j < 7; j++) {
            if(board[i][j] == '.') q.push({i, j});
        }
    }
    while(!q.empty()) {
        pair<short, short> temp = q.front();
        short x = temp.first;
        short y = temp.second;
        if(y <= 4 && board[x][y + 1] == 'o' && board[x][y + 2] == 'o') cnt++;
        if(y >= 2 && board[x][y - 1] == 'o' && board[x][y - 2] == 'o') cnt++;
        if(x <= 4 && board[x + 1][y] == 'o' && board[x + 2][y] == 'o') cnt++;
        if(x >= 2 && board[x - 1][y] == 'o' && board[x - 2][y] == 'o') cnt++;

        q.pop();
    }
    cout << cnt;
}