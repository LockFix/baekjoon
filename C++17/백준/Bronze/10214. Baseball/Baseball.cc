#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int T; cin >> T;
    while(T--) {
        int y;
        int k;
        for(int i = 0; i < 9; i++) {
            int yt, kt; cin >> yt >> kt;
            y += yt;
            k += kt;
        }
        if(k > y) cout << "Korea\n";
        else if(y > k) cout << "Yonsei\n";
        else cout << "Draw\n";
    }
}