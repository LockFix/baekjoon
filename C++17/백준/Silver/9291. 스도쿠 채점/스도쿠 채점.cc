#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    short t; cin >> t;
    short testcase = 1;
    while(t--) {
        short arr[9][9];
        for(int i = 0; i < 9; i++) {
            for(int j = 0; j < 9; j++) {
                cin >> arr[i][j];
            }
        }
        bool flag = false;
        for(int i = 0; i < 9; i++) {
            bool check[10] = {false, };
            for(int j = 0; j < 9; j++) {
                if(check[arr[j][i]] == true) {
                    flag = true;
                    break;
                }
                check[arr[j][i]] = true;
            }
            if(flag) break;
        }
        if(!flag) {
            for(int i = 0; i < 9; i++) {
                bool check[10] = {false, };
                for(int j = 0; j < 9; j++) {
                    if(check[arr[i][j]]) {
                        flag = true;
                        break;
                    }
                    check[arr[i][j]] = true;
                }
                if(flag) break;
            }
        }
        if(!flag) {
            for(int i = 0; i < 9; i += 3) {
                for(int j = 0; j < 9; j += 3) {
                    bool check[10] = {false, };
                    for(int k = i; k < i + 3; k++) {
                        for(int l = j; l < j + 3; l++) {
                            if(check[arr[k][l]]) {
                                flag = true;
                                break;
                            }
                            check[arr[k][l]] = true;
                        }
                        if(flag) break;
                    }
                    if(flag) break;
                }
                if(flag) break;
            }
        }
        if(flag) cout << "Case " << testcase << ": INCORRECT\n";
        else cout << "Case " << testcase << ": CORRECT\n";
        testcase++;
    }
}