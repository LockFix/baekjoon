#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n; cin >> n;
    while(n--) {
        bool mack = false;
        bool zack = false;
        for(int i = 0; i < 10; i++) {
            short tmp; cin >> tmp;
            if(tmp == 18) mack = true;
            else if(tmp == 17) zack = true;
            cout << tmp << ' ';
        }
        cout << '\n';
        if(mack && zack) cout << "both";
        else if(!mack && !zack) cout << "none";
        else if(mack) cout << "mack";
        else cout << "zack";
        cout << "\n\n";
    }
}