#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N; cin >> N;
    int dal = 0;
    int po = 0;
    bool flag = true;
    while(N--) {
        char temp; cin >> temp; 
        if(temp == 'D') dal++;
        else po++;
        if((po + 2 == dal || dal + 2 == po) && flag) {
            flag = false;
            cout << dal << ':' << po;
        }
    }
    if(flag) cout << dal << ':' << po;
}   