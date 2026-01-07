#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N; cin >> N;
    string s; cin >> s;
    if(N <= 25) {
        cout << s;
        return 0;
    } 

    string temp = s.substr(11, N - 22);
    if(temp.find('.') == temp.npos || (temp.find('.') == temp.length() - 1)) {
        cout << s.substr(0, 11) << "..." << s.substr(N - 11);
    } else {
        cout << s.substr(0, 9) << "......" << s.substr(N - 10);
    }
}