#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    short N; cin >> N;
    short count = 0;
    while(N--) {
        string tmp; cin >> tmp;

        if(tmp.find("01") != tmp.npos || tmp.find("OI") != tmp.npos) count++;
    }
    cout << count;
}