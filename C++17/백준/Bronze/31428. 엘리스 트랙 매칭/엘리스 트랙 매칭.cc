#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    short n; cin >> n;
    short c = 0, s = 0, i = 0, a = 0;
    while(n--) {
        char t; cin >> t;

        if(t == 'C') c++;
        else if(t == 'S') s++;
        else if(t == 'I') i++;
        else a++;
    }
    char h; cin >> h;

    if(h == 'C') cout << c;
    else if(h == 'S') cout << s;
    else if(h == 'I') cout << i;
    else cout << a;
}