#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    short t; cin >> t;
    while(t--) {
        short n; cin >> n;
        string temp = "Pairs for " + to_string(n) + ": ";
        for(int i = 1; i <= n / 2; i++) {
            if(n % 2 == 0 && i == n / 2) continue;
            
            temp += to_string(i) + " " + to_string(n - i) + ", ";
        }
        if(temp.length() > 14) {
            temp.erase(temp.length() - 1);
            temp.erase(temp.length() - 1);
        }
        
        cout << temp << '\n';
    }
}