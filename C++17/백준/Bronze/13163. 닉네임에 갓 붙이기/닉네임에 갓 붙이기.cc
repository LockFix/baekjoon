#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    short N; cin >> N;
    cin.ignore();
    while(N--) {
        string s;
        getline(cin, s);
        s = s.substr(s.find(' ') + 1);
        short index = s.find(' ');
        while(index != s.npos) {
            s.erase(index, 1);
            index = s.find(' ');
        }
        cout << "god" << s << '\n';
    }
}