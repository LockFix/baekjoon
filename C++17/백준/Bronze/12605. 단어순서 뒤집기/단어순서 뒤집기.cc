#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    short N; cin >> N;
    cin.ignore();
    for(short i = 1; i <= N; i++) {
        cout << "Case #" << i << ':';
        string tmp;
        getline(cin, tmp);
        short p = tmp.find_last_of(' ');
        while(p != tmp.npos) {
            cout << ' ' << tmp.substr(p + 1);
            tmp = tmp.substr(0, p);
            p = tmp.find_last_of(' ');
        }
        cout << ' ' << tmp << '\n';

    }
}