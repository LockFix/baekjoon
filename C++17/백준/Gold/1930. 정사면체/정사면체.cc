#include <iostream>
using namespace std;

bool check(int a[4], int b[4]) {
    for(int j = 0; j < 4; j++) {
        if(a[j] != b[j]) {
            return false;
        }
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    short K; cin >> K;
    while(K--) {
        int a[4], b[4];

        for(int i = 0; i < 4; i++) cin >> a[i];
        for(int i = 0; i < 4; i++) cin >> b[i];
        
        bool flag = false;
        for(int i = 0; i < 3; i++) {
            flag = check(a, b);
            if(flag) {
                cout << 1 << '\n';
                break;
            }
            int tmp[4] = {b[0], b[2], b[3], b[1]};
            flag = check(a, tmp);
            if(flag) {
                cout << 1 << '\n';
                break;
            }
            tmp[1] = b[3]; tmp[2] = b[1]; tmp[3] = b[2];
            flag = check(a, tmp);
            if(flag) {
                cout << 1 << '\n';
                break;
            }
            int temp = b[0];
            b[0] = b[1];
            b[1] = b[2];
            b[2] = temp;
        }
        if(!flag) {
            int temp = b[0];
            b[0] = b[3];
            b[3] = b[2];
            b[2] = temp;

            flag = check(a, b);
            if(flag) {
                cout << 1 << '\n';
                continue;
            }
            int tmp[4] = {b[0], b[2], b[3], b[1]};
            flag = check(a, tmp);
            if(flag) {
                cout << 1 << '\n';
                continue;
            }
            tmp[1] = b[3]; tmp[2] = b[1]; tmp[3] = b[2];
            flag = check(a, tmp);
            if(flag) {
                cout << 1 << '\n';
                continue;
            } else cout << 0 << '\n';
        }
    }
}