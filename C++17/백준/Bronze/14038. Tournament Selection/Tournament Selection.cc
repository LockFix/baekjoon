#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int win = 0;
    int loss = 0;
    string temp;
    for(int i = 0; i < 6; i++) {
        cin >> temp;
        if(temp.compare("W") == 0) win++;
        else loss++;
    }
    if(win == 0) cout << -1;
    else if(win == 1 || win == 2) cout << 3;
    else if(win == 3 || win == 4) cout << 2;
    else cout << 1;
}