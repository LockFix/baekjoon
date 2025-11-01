#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    short C; cin >> C;
    short result = 0;
    while(C--) {
        string tmp; cin >> tmp;
        string s = tmp;
        short count = 0;
        short index = s.find("for");
        while(index != s.npos) {
            s = s.substr(index + 3);
            count++;
            index = s.find("for");
        }
        index = tmp.find("while");
        while(index != tmp.npos) {
            tmp = tmp.substr(index + 5);
            count++;
            index = tmp.find("while");
        }
        if(count > result) result = count;
    }
    cout << result;
}