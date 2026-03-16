#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string s; cin >> s;
    string tmp = "SciComLove";
    short count = 0;

    for(short i = 0; i < 10; i++) {
        if(s[i] != tmp[i]) count++;
    }
    cout << count;
}