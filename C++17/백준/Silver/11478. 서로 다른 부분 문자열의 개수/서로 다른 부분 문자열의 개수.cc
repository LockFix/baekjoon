#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string s; cin >> s;
    unordered_set<string> check;
    int count = 0;
    for(int i = 0; i < s.length(); i++) {
        for(int j = 1; j <= s.length() - i; j++) {
            string temp = s.substr(i, j);
            if(check.find(temp) == check.end()) {
                count++;
                check.insert(temp);
            }
        }
    }
    cout << count;
}   