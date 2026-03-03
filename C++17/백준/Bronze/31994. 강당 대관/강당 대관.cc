#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    short max = 0;
    string result = "";
    for(short i = 0; i < 7; i++) {
        string s; short j; cin >> s >> j;

        if(max < j) {
            result = s;
            max = j;
        }
    }
    cout << result;
}