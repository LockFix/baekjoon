#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    short K, x, y; cin >> K >> x >> y;
    if(K == 1) {
        vector<vector<short>> ans(2, vector<short>(2));
        for(short i = 0; i < 2; i++) {
            for(short j = 0; j < 2; j++) ans[i][j] = 1;
        }
        ans[y - 1][x - 1] = -1;
        for(short i = 1; i >= 0; i--) {
            for(short j = 0; j < 2; j++) cout << ans[i][j] << ' ';
            cout << '\n';
        }
    } else if(K == 2) {
        vector<vector<short>> ans(4, vector<short>(4));
        for(short i = 0, tmp = 1; i <= 2; i += 2, tmp += 3) {
            for(short j = 0; j < 2; j++) {
                ans[i + j][0] = tmp;
                ans[i + j][1] = tmp;

                ans[i + j][2] = tmp + 1;
                ans[i + j][3] = tmp + 1;
            }
        }
        for(int i = 1; i < 3; i++) {
            for(int j = 1; j < 3; j++) ans[i][j] = 3;
        }
        ans[y - 1][x - 1] = -1;
        if(ans[y - 1][x - 1] == ans[0][0] || ans[y - 1][x - 1] == ans[0][1] || ans[y - 1][x - 1] == ans[1][0]) ans[1][1] = 1;
        else if(ans[y - 1][x - 1] == ans[0][2] || ans[y - 1][x - 1] == ans[0][3] || ans[y - 1][x - 1] == ans[1][3]) ans[1][2] = 2;
        else if(ans[y - 1][x - 1] == ans[2][0] || ans[y - 1][x - 1] == ans[3][0] || ans[y - 1][x - 1] == ans[3][1]) ans[2][1] = 4;
        else if(ans[y - 1][x - 1] == ans[2][3] || ans[y - 1][x - 1] == ans[3][2] || ans[y - 1][x - 1] == ans[3][3]) ans[2][2] = 5;

        for(short i = 3; i >= 0; i--) {
            for(short j = 0; j < 4; j++) cout << ans[i][j] << ' ';
            cout << '\n';
        }
    }
}